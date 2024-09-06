/*Q8. Define a class named `Hotel` in C++ with the following specifications: 
Private Members: 
- Rno: Data member to store the room number. 
- Name: Data member to store the customer's name. 
- Tariff: Data member to store the per-day charges. 
- NOD: Data member to store the number of days of stay. 
- CALC (): Function to calculate and return the total amount as `NOD * Tariff`. If the value of `NOD * Tariff` exceeds 
10,000, the total amount should be calculated as `1.05 * NOD * Tariff` 
Public Members: 
- Checkin(): Function to input the values for `Rno`, `Name`, `Tariff`, and `NOD`. 
- Checkout (): Function to display the values of `Rno`, `Name`, `Tariff`, `NOD`, and the total amount. 
- The total amount should be calculated by calling the `CALC ()` function.*/

#include<iostream> 
#include<string> 
using namespace std;
class hotel{ 
 private:
int rno;
string name;
int tariff;
int NOD;
double calc()
{
 int a=NOD*tariff;
 if (a>10000) {
return 1.05*a;
}
else{
 return a;
}
}
public:
void checkin(){
cout<<"enter room no."<<endl;
cin>>rno;
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter tariff"<<endl;
cin>>tariff;
cout<<"enter nod"<<endl;
cin>>NOD;
}
void checkout(){
cout<<"\nRoom no: "<<rno<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Tariff: "<<tariff<<endl;
cout<<"No. of days: "<<NOD<<endl;
cout<<"amount:"<<calc();
}
};
int main(){
hotel h;
h.checkin();
h.checkout();
return 0;
}
