/*
AAA
BBB
CCC
*/
// second approach
#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    char ch = 65;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<ch;
           j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
}
/*
#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
     cin>>n;
     while(row<=n)
     {
         int col=1;
        while(col<=n)
        {
            char ch = 'A'+row-1;
            cout<<ch;
            col++;
        }
       cout<<endl;
       row++;
     }

}
*/
