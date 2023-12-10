#include<iostream>
using namespace std;

int main()
{
    int i,n,fact=1;
    float sum=0;
    cout<<"ENter no ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact = fact*i;
        if(i%2==0)
        {
          sum = sum +((i*1.0)/fact);
        }
    }
    cout<<"sum of fact is "<<sum;
return 0;
}