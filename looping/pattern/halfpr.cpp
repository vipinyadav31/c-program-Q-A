#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter no.";
    cin>>n;
     for(i=1;i<=n;i++)
     {
        for(j=1;j<=n;j++)
         {
            if(j<=n-i)
            {
                cout<<"%";
            }
            else
            {
                cout<<"* ";
            }
         }
         for(int a=n;a>=i;a--)
         {
            cout<<"%";
         }
         cout<<endl;
     }
    return 0;
}