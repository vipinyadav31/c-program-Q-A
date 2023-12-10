#include<iostream>
using namespace std;

int main()
{
  int n,rev=0,rem,a;
  cout<<"plz enter a no";
  cin>>a;
  n=a;
  while (n!=0)
  {
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
  }
  cout<<"THe revers"<<rev;
  if(rev==a)
  {
	cout<<"This is palandrom no.";
  }
  else
  {
	cout<<"THis is not plandrom ";
  }
  return 0;
}