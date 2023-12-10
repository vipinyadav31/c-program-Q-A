// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[4]={1,2,3,4};
//     // element call by index  & indexing of aaray is always start from 0.
//     cout<<arr[3];
//     return 0;
// }

// array for user input
// Q13 & 15
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size";
    cin>>n;
    int arr[n];
    for(int a=0;a<n;a++)
    { 
      cin>>arr[a];
    }
    cout<<"Your array element are :-"<<endl;
    for(int a=0;a<n;a++)
    cout<<arr[a]<<endl;
    return 0;
}