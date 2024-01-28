/*
ABC
ABC
ABC
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
       char ch = 65;
       while(j<=n)
       {
           //char ch ='A'+j-1;
           ch = 65+j-1;
           cout<<ch;
            j++;
       }
    cout<<endl;
       i++;
    }
}
