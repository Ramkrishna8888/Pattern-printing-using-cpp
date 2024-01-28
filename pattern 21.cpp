/*
****
***
**
*
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(i<=n)
    {
        /*int j=n;
        while(j>=i)
        {
            cout<<"*";
            j--;
        }*/
        int j = n-i+1;
        while(j)
        {
            cout<<"*";
            j--;
        }
    cout<<endl;
     i++;
    }
}
