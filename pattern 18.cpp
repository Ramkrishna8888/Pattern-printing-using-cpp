/*
A
BC
CDE
ABCD
*/
#include<iostream>
using namespace std;
 int main()
 {
    int n,i=1;
    cin>>n;
    while (i<=n)
     {
         char ch='A'+n-i;
         int j=1;
         while(j<=i)
         {
             cout<<ch;
             ch++;
             j++;
         }
         cout<<endl;
         i++;
     }
 }
