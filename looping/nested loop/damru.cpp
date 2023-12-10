#include <iostream>
using namespace std;

int main()
{
  int a,b,n;
  cout<<"Enter no ";
  cin>>n;
    for(a=n;a>=1;a--)
    {
      for(b=1;b<=a;b++)
      {
        cout<<b;
      }
      cout<<endl;
    }
  // for (a = 0; a < 10; a++)
  // {
  //   for (b=1; b<a; b++)
  //   {
  //     cout << " ";
  //   }
  //   for(i=10;i>a;i--)
  //   {
  //     cout<<"%";
  //   }
  //   cout<<"\n";
  // }
  //   for (i = 0; i < 10; i++)
  //   {
  //    for(j=10;j>i;j--)
  //     {
  //       cout<<" ";
  //     } 
  //    for(b=0;b<i;b++)
  //     {
  //       cout<<"%";
  //     }
  //    cout<<"\n";
  //   }
  return 0;
}