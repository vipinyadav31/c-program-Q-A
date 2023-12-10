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
//   code here
     int j, temp=0;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
          temp =arr[j];
         arr[j] =arr[i];
         arr[i]=temp;
      }
    }
  }
  for(j=0;j<n;j++)
  {
    cout<<arr[j];
  }

    return 0;
}