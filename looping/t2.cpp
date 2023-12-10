#include<iostream>
using namespace std;

int main()
{
    int a,b,n,j,i;
    cout<<"Enter no ";
    cin>>n;

    for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"*";
            }
        
        cout<<"\n";
        }
    return 0;
}