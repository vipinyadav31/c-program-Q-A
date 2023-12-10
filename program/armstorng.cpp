#include<iostream>
using namespace std;

int main()
{
    int n,rem,arm=0,num;
    cout<<"Enter a no.";
    cin>>n;
    num=n;
    while (n>0)
    {
        /* code */
        rem =n%10;
        arm=arm+(rem*rem*rem);
        n=n/10;
    }
    if(arm==num)
    {
        cout<<"THis is armstonge no.";
    }
    else
    {
        cout<<"not armstonge no.";
    }
    return 0;
}