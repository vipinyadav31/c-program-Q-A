#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter a no.";
    cin>>n;
    for(i=n;i>=1;i--)
    {
       for(j=1;j<=i;j++)
       {
        cout<<i;
       }
       for(int a=1;a<=j;a++)
       {
        cout<<"$";
       }
    cout<<endl;
    }

    return 0;
}