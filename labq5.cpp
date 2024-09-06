/*Q5. You are given an array A of N elements. Now, you need to choose the best index of this array A. An index of the array 
is called best if the special sum of this index is maximum across the special sum of all the other indices.*/

#include<iostream>
using namespace std;
int spsum(int arr[],int j,int n){
 int indx = j+1,pair = 2;
 int specialsum = arr[j];
 while(indx+pair<=n){
 for(int k = indx ;k<indx+pair;k++){ 
 specialsum+=arr[k];
 }
 indx+=pair;
 pair++;
 }
 return specialsum;
}
int main(){
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
 cin>>arr[i];
 }
 int maxspsum = 0;
 int index=0;
 for(int i=0;i<n;i++){
 int a = spsum(arr,i,n);
 if(maxspsum < a) 
 maxspsum = a;
 index = i;
 }
 cout<<"The max value is "<<maxspsum;
 cout<<" at index "<<index;
 return 0;
}
