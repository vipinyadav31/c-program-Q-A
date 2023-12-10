// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
 
  int i , j ,n, temp;
   
   cout<<"Enter size of array ";
   cin>>n;
   int arr[n];
   cout<<"enter element of array";
   for(i = 0;i<n ; i++)
   {
       cin>>arr[i];
   }

//   reverers
    for(i=0 , j=n-1 ; i<n/2;i++,j--)
    { 
       temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
    }
    for(i = 0 ; i<n ; i++)
    {
        cout<<arr[i];
    }
    return 0;
}
