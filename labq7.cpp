/*Q7. Write a C++ program to store and display the record of N Students.*/

#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
 string name;
 int marks;
public:
 void getDetails();
 void setDetails();
};
void Student::setDetails()
{
 cout << "Enter the name:" << endl;
 cin >> name;
 cout << "Enter total marks:" << endl;
 cin >> marks;
}
void Student::getDetails()
{
 cout << "Name: " << name << " ,marks: " << marks << endl;
}
int main()
{
 int count;
 cout << "Enter the total number of students: ";
 cin >> count;
 Student studentArray[count];
 for (int i = 0; i < count; i++)
 {
 cout << "For student " << i + 1 << ":" << endl;
 studentArray[i].setDetails();
 }
 cout << "\nStudent details " << endl;
 for (int i = 0; i < count; i++)
 {
 studentArray[i].getDetails();
 }
 return 0;
}
