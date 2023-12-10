#include<iostream>
using namespace std;

int main()
{
    int n,del;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index to  remove ";
    cin>>del;
    for(int i=del;i<n;i++)
    {
        arr[i]=arr[i+1];
      }
      n=n-1;
    // n=n-1;   
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}