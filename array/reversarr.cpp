#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n],arr2[n];
    cout<<"Enter the  value of array";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The reverse array is:-"<<endl;
    for(  i=n-1;i>=0;i--)
    {
         arr2[i]  = arr1[i];
    }
return 0 ;
}
