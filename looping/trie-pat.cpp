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
            cout<<"%";
        }
        else{
            cout<<"* ";
        }
    }
        for( int k=1;k<=n;k++)
        {
    
        if( k<= n-i)
        {
            cout<<"%";
        }
        }
    cout<<endl;
   }
   
   return 0;
}