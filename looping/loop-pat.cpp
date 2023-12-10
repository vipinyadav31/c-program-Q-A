#include <iostream>
using namespace std;

int main()
{

    int n, i, j ;
    cout << "enter np";
    cin >> n;

   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
    {
        if( j<= n-i)
        {
            cout<<" ";
        }
        else{
            cout<<" *";
        }
    }
    cout<<endl;
   }
   for(int a=n;a>=1;a--)
   {
    for(int b=1;b<=n;b++)
    {
        if(b<=n-a)
        {
            cout<<" ";
        }
        else{
            cout<<"*";
        }
        
    }
    cout<<endl;
   }


    return 0;
}