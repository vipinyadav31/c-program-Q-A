#include<iostream>
using namespace std;
int add(int a,int b){
    int sum =a+b;
    return sum;
}

int main()
{
    int i,j;
    cout<<"Enter 2 no.";
    cin>>i>>j;
    cout<<add(i,j);
    return 0;
}