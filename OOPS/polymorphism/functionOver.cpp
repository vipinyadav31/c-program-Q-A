#include<iostream>
using namespace std;

void add(int a,int b)
{
    cout<<"sum is "<<(a+b)<<endl;
}
void add(double  a, double b)
{
    cout<<"sum of float no is "<<(a+b);
}
main()
{
    add(10,20);
    add(20.5, 10.4);
}
