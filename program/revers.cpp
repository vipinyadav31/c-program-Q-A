#include<iostream>
using namespace std;

int main()
{
  int a,rev=0, rem;
  cout<<"Enter no.";
  cin>>a;
  while (a!=0)
  {
    rem=a%10;
    rev= rev*10+rem;
    a=a/10;
  }
  cout<<"The revers value is "<<rev;
  return 0;
}