#include<iostream>
using namespace std;

int main()
{
    int n,second=0,max=0;
    cout<<"size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            second =max;
           max=arr[i];
        }
        else if(second<arr[i]){
            second =arr[i];
        }
    }
    cout<<"Maximum value is "<<max;
    cout<<"second maximum valu is "<<second;
    return 0;
}