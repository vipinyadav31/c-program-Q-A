#include<iostream>
using namespace std;
void fab(int a)
{
  int f=0;
  int s=1;
  int next;
  for(int i=0;i<=a;i++)
  {
    cout<<f<<endl;
    next = f+s;
    f=s;
    s=next;

  }
  return;
}

int main()
{
    int i;
    cout<<"Enter no";
    cin>>i;
    fab(i);
    cout<<"enter again";
    fab(i);
    return 0;
}