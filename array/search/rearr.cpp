#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no .";
    cin>>n;
    int arr[n];
    cout<<"Enter element ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the revers is ";
    for(int i=n;i>=0;i--)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}