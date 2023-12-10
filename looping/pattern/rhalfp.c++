#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter no.=";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"@ ";
        } 
        for(int b=1;b<=j;b++)
        {
           cout<<" &";
        }
        for(int a=n;a>=i;a--)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;   
}