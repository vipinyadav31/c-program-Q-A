#include<iostream>
using namespace std;

int main()
{
    int n,i=0,rem,arr[100];
    cout<<"enter no.";
    cin>>n;
    while (n)
    {
        rem=n%2;
         arr[i]=rem;
        n=n/2;
        i++;
    }
    cout<<arr[i];
    // for(int j=i;j>=0;j--)
    // {
    //     cout<<arr[j];
    // }
    return 0;
}