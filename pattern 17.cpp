/*
A
BC
CDE
DEFG
Most important
*/
#include<iostream>
using namespace std;
 int main()
 {
     int n,i=1;
      cin>>n;
      while(i<=n)
     {

       int j=1;
         while(j<=i)
         {
           char ch ='A'+j+i-2;
           cout<<ch;
           j++;
         }
         cout<<endl;
         i++;
     }
 }
