#include<iostream>
#include<string>
using namespace std;

int main()
{
       int  n,i;
 
//   cout<<"enter size of array";
//   cin>>n;
//   int arr[n];
//   for(i=0;i<n;i++)
//   {
//     cin>>arr[i];
//   }
  string arr = "vava     aaa     t t t t  tt";
   n = arr.length();
  int flag[n] = {0};
  for(i=0;i<n;i++)
  {
      int count =0;
      if(flag[i]!=1)
      {
           for(int j =0; j<n;j++)
          {
              if(arr[i] == arr[j])
              {
                  count++;
                flag[j] =1;
              }
           }
      }
      if(count>1|| count ==1)
      {
          cout<<arr[i]<<"   repeat   "<<count<<"  times"<<endl;
      }
  }
  return 0;
}
