#include<iostream>
using namespace std;

int fact (int n) 
{
    if(n == 0)
    {
         return 1;
    }
   int smallP = fact(n-1);
   int bigp = n * smallP;

   return bigp;
     
}

int main()
{   
    int n = 4;
    int ans  = fact(n);
    cout<<ans;
    
    return 0;
}