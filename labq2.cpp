/* Q2.Construct a C++ program that removes a specific character from a given string and return the updated string.*/
#include<iostream>
using namespace std;
int main()
{
char ch;
string str;
cout<<"enter string"<<endl;
getline(cin,str);
cout<<"enter character to remove"<<endl;
cin>>ch;
for(int i=0;str[i]!='\0';i++)
{
 if(str[i]!=ch)
 cout<<str[i];
}
 return 0;
}

