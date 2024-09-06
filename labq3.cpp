/* Q3.Create two namespaces, Math and Physics, each containing a function calculate(). The calculate() function in the 
Math namespace should display a message indicating a mathematical calculation, while the calculate() function in the 
Physics namespace should display a message indicating a physical calculation. Use these functions in the main program 
without causing naming conflicts.*/

#include<iostream>
using namespace std;
namespace mathematics
{
 int calculations(int a,int b)
 {
 int sum=a+b;
 return sum;
 }
}
namespace physics
{
 int calculations(int a,int b)
 {
 int dist;
 if(a>b)
 dist=a-b;
 else
 dist=b-a;
 return dist;
 }
}
int main()
{
 int a,b;
 cout<<"Enter value of a and b"<<endl;
 cin>>a>>b;
 cout<<"Maths="<<mathematics::calculations(a,b)<<endl;
 cout<<"Physics="<<physics::calculations(a,b)<<endl;
 return 0;
}
