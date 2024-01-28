/*
A
BC
DEF
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    char ch = 'A';
    //char ch = 65;
    while(i<=n)
    {
      int j =1;
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
