#include <iostream>
using namespace std;

int main()
{
  int a,b,i,j,n;
  cout<<"Enter no ";
  cin>>n;
    for(a=n;a>=1;a--)
    {
      for(b=1;b<=a;b++)
      {
        cout<<b;
      }
      for(i=1;i<=n;i++)
      {  
         for(j=1;j<=n;j++)
         {
            cout<<"$";
         }
      }
      cout<<endl;
    }
    return 0;
}