#include<iostream>
using namespace std;

int main()
{
  int a,b,c,d=0;
  cout<<"plz enter the starting point and end point ";
  cin>>a>>b;
  for(c=a;c<=b;c++)
  {
     d=d+c;
  }
  cout<<"the sum of series is "<<d;
  return 0;
}