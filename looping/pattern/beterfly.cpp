#include<iostream>
using namespace std;
int main()
{  
    int a,b,i,j,n;
    cout<<"Enter no.";
    cin>>n;
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=i;j++)
         {
            cout<<j;
         }
         cout<<endl;
         
    }
    return 0;
}