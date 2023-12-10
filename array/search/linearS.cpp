#include<iostream>
using namespace std;
// lenear search 
int main()
{
    int n,find,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a value to find in array ";
    cin>>find;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==find)
        {
            cout<<"number is present in arrand location is "<<i;
           flag++;
           break;
        }
    }
    if(flag==0)
    {
        cout<<"No. not found ";
    }
    else
    {
        cout<<"No found";
    }
    return 0;
}