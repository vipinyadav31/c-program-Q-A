#include<iostream>
using namespace std;

int fact (int n) 
{
    if(n == 0)
    {
         return 0;
    }
   int smallP = fact(n-1);
   int bigp = n + smallP;

   return bigp;
     
}

int main()
{   
   int arr[100], n=5 ,i;
    for(i = 0 ; i<n  ;i++)
    {
    cin>>arr[i];
    }
    int ans  = fact(arr[i]);
    cout<<ans;
    
    return 0;
}