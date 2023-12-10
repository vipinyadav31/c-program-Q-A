#include<iostream>
using namespace std;

int main()
{
       int  n,i;
 
  cout<<"enter size of array";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
// code
int x, count=0;
cout<<"enter no to check occurnce";
cin>>x;

  for(i=0 ; i<n; i++)
  {
     if(arr[i] == x)
     {
        count++;
     }
    
  }
  cout<<x <<" is present arrayy in   "<<count<<"  times"<<endl;

    return 0;
}