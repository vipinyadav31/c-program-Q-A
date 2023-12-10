#include<iostream>
using namespace std;

int main()
{
    int i,j,n,a,b,d,c;
    cout<<"Enter a no.";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(a=1;a<=n;a++)
        {
            for(b=1;b<=a;b++)
            {
                cout<<b;
            }
        }
        // for(c=1;c>=i)
        cout<<endl;
    }
    return 0;
}