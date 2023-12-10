#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,avg=0;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=arr[i]+sum;
    }
    cout<<"The sum is "<<sum;
    avg=sum/n;
    cout<<"the avrage is "<<avg;
    return 0;
}