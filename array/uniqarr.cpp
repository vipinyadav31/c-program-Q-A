#include<iostream>
using namespace std;

int main()
{
    
    int  i,j,n;
    cout<<"enter no";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
    {
       if(arr[i]==arr[j])
       {
         for(int k=j;k<n;k++)
         {
            arr[k]=arr[k+1];
         }
         n--;
         j--;
       }
    }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}