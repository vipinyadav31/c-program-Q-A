#include<iostream>
using namespace std;

int main()
{ 
    int n ,rem, sum = 0 , rem1,pal=0;
    cout<<"Enter no.";
    cin>>n;
    while(n!=0)
    {
        rem = n%10;
        sum =sum+rem;
        n = n/10;
    }
    while (sum!=0)
    {
        rem1 = n%10;
        pal = pal*10+rem1;
        sum = sum/10;
    }
    if(sum == pal)
    {
        cout<<"the sum of no is palandrom";
    }
 else
 {
    cout<<"false";
 }    
    return 0;
}