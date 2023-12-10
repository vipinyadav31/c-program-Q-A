#include<iostream>
using namespace std;

int main()
{
  int j,n,i;
  // cout<<"plz enter n term";
  // cin>>n;
 
  for(i = 1;i<=100;i++)
  {
      int count =0;
      for( j = 2;j<i; i++)
      {
          int count =0;
          if(i%j == 0)
          {
              count++;
              break;
          }
    }
       if(count == 0 && i!=1)
      {
          cout<<i;
          count = 0;
      }
  }
  return 0;
}