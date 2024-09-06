/* Q1.Write a C++ to calculate the electricity bill of a user according to the below criteria: Input: The program prompts the 
user to enter their name and the number of units consumed.
Charges Calculation: 
For the first 100 units, the charge is 60 paise per unit.
For the next 200 units, the charge is 80 paise per unit.
For units beyond 300, the charge is 90 paise per unit.
A minimum charge of Rs 50 is applied if the total charge is less than Rs 50.
If the charge exceeds Rs 300, a 15% surcharge is added.*/

#include <iostream>
using namespace std;
int main()
{
 string name;
 int units;
 float bill = 0.0;
 cout << "Enter your name: ";
 getline(cin, name);
 cout << "Enter the number of units consumed: ";
 cin >> units;
 if (units <= 100) {
 bill = units * 0.60;
 } else if (units <= 300) {
 bill = (100 * 0.60) + ((units - 100) * 0.80);
 } else {
 bill = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
 }
 if (bill < 50) {
 bill = 50;
 }
 if (bill > 300) {
 bill += bill * 0.15;
 }
 
 cout<< name << "! Your electricity bill is Rs " << bill << endl;
 return 0;
}
