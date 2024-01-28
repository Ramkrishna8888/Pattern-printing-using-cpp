/*#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
      cin>>n;
       int k=1;
      while(i<=n)
      {
        int j=1;
         while(j<=i)
            {

               cout<<k<<" ";
                k++;
                j++;
            }
            cout<<endl;
            i++;
               }

}
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

}
