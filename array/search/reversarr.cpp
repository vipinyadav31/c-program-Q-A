#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"size of array ";
    cin>>n;
    int arr[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n;i>=0;i--)
     {
        cout<<arr2[i];
     }
    //  for(int i=0;i<n;i++)
    //  {
    //     cout<<arr2[i];
    //  }

    return 0;
}