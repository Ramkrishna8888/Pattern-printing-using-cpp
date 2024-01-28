/*
1111
 222
  33
   4
*/
#include<iostream>
using namespace std;
 int main()
 {
     int n,i=1;
       cin>>n;
     while(i<=n)
     {
        int s=i-1;
          while(s)
          {
            cout<<" ";
             s--;
          }
          int j=n-i+1;
            while(j)
            {
                cout<<i;
                j--;
            }
         cout<<endl;
           i++;
     }

 }
