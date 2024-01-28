#include<iostream>
using namespace std;
int main()
{
    int l;
    for(int i=0;i<5;i++)
    {
      for(int j=5;j>i;j--)
      {
        cout<<" ";
        if(j<=i)
        {
        for(int k=5;k>i;i--)
        {
            cout<<"*";
        }
        }
      }
      cout<<endl;
    }
  return  0;
}
