#include<iostream>
using namespace std;

int main()
{
    int n,add,val;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index to  add in array";
    cin>>add;
    cout<<"enter the value ";
    cin>>val;
    for(int i=add;i<n;i++)
    {
        arr[i]=arr[i+1];
        arr[i] = val;
      }
    for(int i=0;i<n;i++)
    {   
        cout<<arr[i]<<" " ;
    }

    return 0;
}