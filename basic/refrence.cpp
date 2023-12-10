#include<iostream>
using namespace std;

int main()
{
    int c;
    int a=10;
    int b=5;
    int &d=a;
    c=d+b;
    cout<<"total is ="<<c;
    return 0;
}