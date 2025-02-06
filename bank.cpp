#include <iostream>
#include <string>
using namespace std;
class Account
{
    float balance;
    string userId;
    int password;
    int account_number;

public:
    void set(string id, int pass, int acc, float bal)
    {
        this->userId = id;
        this->password = pass;
        this->account_number = acc;
        this->balance = bal;
    }

    bool check(string id, int pass)
    {
        if (this->userId == id)
        {
            if (this->password == pass)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    bool checkAccountNo(int acc)
    {
        if (this->account_number == acc)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void checkBal()
    {
        cout << "Bal:" << this->balance<<endl;
    }

    void transfer(float amt, Account &transferingAccount)
    {
        this->balance = this->balance - amt;
        transferingAccount.balance = transferingAccount.balance + amt;
    }
};

class bank
{
private:
    Account acc[100];
    int Index = 0;

public:
    void createAcc()
    {
        cout << "Enter your userId:" << endl;
        string id;
        cin >> id;
        cout << "Enter password:" << endl;
        int pass;
        cin >> pass;
        cout << "Enter the account number:" << endl;
        int accnt;
        cin >> accnt;
        cout << "Set initial balance:" << endl;
        float bal;
        cin >> bal;

        acc[Index].set(id, pass, accnt, bal);
        Index++;
    }
    void login()
    {
        cout << "Enter your userId:" << endl;
        string id;
        cin >> id;
        cout << "Enter password:" << endl;
        int pass;
        cin >> pass;

        for (int i = 0; i < Index; i++)
        {
            if (acc[i].check(id, pass) == true)
            {
                while (1)
                {
                    cout << endl
                         << "1.check balance" << endl
                         << "2.tranfer money" << endl
                         << "3.exit" << endl
                         << "enter choice:" << endl;
                    int ch;
                    cin >> ch;

                    if (ch == 1)
                    {
                        acc[i].checkBal();
                    }
                    else if (ch == 2)
                    {
                        cout << "enter transfer amount:" << endl;
                        float amt;
                        cin >> amt;
                        cout << "enter account number where to transfer amount:" << endl;
                        int accnt_to_transfer;
                        cin >> accnt_to_transfer;
                        for (int j = 0; j < Index; j++)
                        {
                            if (acc[j].checkAccountNo(accnt_to_transfer) == true)
                            {
                                acc[i].transfer(amt, acc[j]);
                            }
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
};

int main()
{

    bank rbi;

    while (1)
    {
        cout << endl
             << "1.create account" << endl
             << "2.login" << endl
             << "3.exit" << endl;
        int ch;
        cout << "Enter choice" << endl;

        cin >> ch;

        if (ch == 1)
        {
            rbi.createAcc();
        }
        else if (ch == 2)
        {
            rbi.login();
        }
        else
        {
            break;
        }
    }

    return 0;
}