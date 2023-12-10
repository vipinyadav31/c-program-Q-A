#include<iostream>
using namespace std;

int main()
{
      int  n,i,j;
 
  cout<<"enter size of array";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
//  code 
int k;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1;j<n; j++)
        {
          if(arr[i] ==arr[j])
          {
            for(k=j;k<n;k++)
            {
                arr[k] = arr[k+1];
            }
            n--;
            j--;
          }
          
        }
    } 
    cout<<"uniq is";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}