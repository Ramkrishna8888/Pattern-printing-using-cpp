#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<n)
    {
       int j=1;
       while(j<=n)
       {
           cout<<endl<<"First value of j"<<j<<endl;
           cout<<n-j+1;
            j++;

       }
        cout<<endl;
        i++;
        cout<<endl<<"VALUE of i id "<<i<<endl;

    }
}
