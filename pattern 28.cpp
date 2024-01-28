/*
12345
1234
123
12
1
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    int temp=n;
    while(i<=n)
    {
        int j=1;
        while(j<=temp)
        {
            cout<<j;
            j++;

        }
        temp--;
        cout<<endl;
        i++;
    }
}
