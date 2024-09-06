/*Q6. Implement a C++ program to demonstrate the concept of data abstraction using the concept of Class and 
Objects.*/

#include <iostream>
#include<string>
using namespace std;
class student{
 int roll;
 string name;
public:
 void input(){
 cout<<"Enter name of student: ";
 getline(cin,name);
 cout<<"Enter roll no. of student: ";
 cin>>roll;
 }
 void output();
};
void student :: output(){
 cout<<"Name of the student: "<<name;
 cout<<"\nRoll no. of student: "<<roll<<endl;
}
int main() {
 student s1;
 s1.input();
 s1.output();
return 0;
}
