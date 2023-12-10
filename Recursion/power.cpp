#include<iostream>
using namespace std;
int power(int n , int p)
{
     if(p == 0 )
     {
         return 1 ; 
     }
     int smallp =    power(n , p-1);
     int bigp =  n*smallp;
     return bigp;

}
int main()
{
    int n , p ;
    cout<<"enter n0 and power of it";
    cin>>n>>p;
   cout<<power(n,p);

    return 0;
}