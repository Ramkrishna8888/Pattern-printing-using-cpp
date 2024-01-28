/*
1
23
456
*/
#include<iostream>
using namespace std;
int main()
{
   int n,i=1;
    cin>>n;
    int c=1;
    while(i<=n)
     {
         int j=1;
        while(j<=i)
        {
            cout<<c;
            c++;
            j++;
        }
     cout<<endl;
     i++;
     }


}
