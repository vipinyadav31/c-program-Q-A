#include<iostream>
using namespace std;

int main()
{
  int a,b,i;
  for(a=1;a<=10;a++)
  {
    for(b=10;b>=a;b--)
    {
      cout<<b;
    }
      for(i=1;i<a;i++)
      {
      cout<<i<<" " ;
      }
      
      cout<<"\n";
  }
  
  return 0;
}