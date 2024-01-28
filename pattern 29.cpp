/*
1234554321
1234**4321
123****321
12******21
1********1
now you are a Dabbang loop user
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
        int k=1;
         while(k<=i)
         {
             cout<<"*";
             k++;
         }
         int l =1;
         while(l<i)
         {
             cout<<"*";
             l++;
         }
        int m=temp;
        while(m)
        {
            cout<<m;
             m--;
        }
        break;
        temp--;
        cout<<endl;
        i++;
    }
}

/*
smart buddhi

1234554321
1234**4321
123****321
12******21
1********1
now you are a Dabbang loop user

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
        int k=1;
         while(k<i)
         {
             cout<<"**";
             k++;
         }
        int m=temp;
        while(m)
        {
            cout<<m;
             m--;
        }
        temp--;
        cout<<endl;
        i++;
    }
}
*/
