#include<iostream>
using namespace std;

int main()
{
    int  n = 123456,rem ,sum = 0;

     while (n!=0)
     {
        /* code */
        rem = n%10;
        sum = sum +rem;
       n = n/10;
     }
     cout<<sum;
    return 0;
}