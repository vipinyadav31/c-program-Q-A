#include<iostream>
using namespace std;
int sumArr(int arr[] , int size)
{
  if(size == 0)
  { 
    return 0; 
  }
  if (size == 1)
  {
    return arr[0];
  }
  
   int  remnPart = sumArr(arr+1 , size-1) ;
     cout<<remnPart<<endl;
     int sum  =arr[0] + remnPart;
   return sum ; 
}

int main()
{
  int arr[5] = {1,2,3,4,5};
  int size  = 5; 
   int ans  = sumArr(arr, size);
   cout<<"sum is "<<ans;
  return 0;
}