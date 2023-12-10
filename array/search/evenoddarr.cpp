#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"even no. is ";
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}