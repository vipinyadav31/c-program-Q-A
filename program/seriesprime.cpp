#include<iostream>
using namespace std;

int main()
{
  int a,p=2,n,i;
  cout<<"plz enter n term";
  cin>>n;
  while (n)
  {
    for (  i= 2; i < p; i++)
    {
      if (p%i==0)
       break; 
    }
    if(i==p)
    {
      cout<<p<<" ";
      n--;
    }
    p++;
  }
  return 0;
}