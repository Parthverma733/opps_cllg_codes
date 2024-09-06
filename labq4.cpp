/* Q4. Implement a C++ program to find the non-repeating characters in string.*/

#include<iostream>
using namespace std;
int main()
{
int count;
string str;
cout<<"enter string"<<endl;
getline(cin,str);
for(int i=0;str[i]!='\0';i++)
{
 count=0;
 for(int j=0;str[j]!='\0';j++)
 {
 if(str[i]==str[j])
 count++;
 }
 if(count==1)
 cout<<str[i]<<" ";
}
return 0;
}
