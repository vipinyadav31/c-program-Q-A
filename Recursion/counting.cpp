#include<iostream>
using namespace std;
 
 int count(int n)
 {
    if(n == 0)
    {
        return 0;
    }
     int ans  =  1+ count(n-1);
      cout<<ans<<endl;
      return ans;
 }

int main()
{
    int n=10;
     
    count(n);
    return 0;
}