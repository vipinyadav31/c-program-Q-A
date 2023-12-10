#include<iostream>
using namespace std;

int counting(int a)
{
    int count = 0;
    if(a == 1 )
    {
        return 1 ;
    }
     count   =  a + counting(a-1);
    //  cout<<count;
    return count;

}
int main()
{
    int a ;
    cin>> a;
     int n = counting(a);
    cout<<n;
    return 0;
}