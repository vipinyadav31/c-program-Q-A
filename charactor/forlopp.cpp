#include<iostream>
using namespace std;

int main()
{
    char n,ch,chr,chc;
    cout<<"Enter a charector ";
    cin>>n;
    for(ch='a';ch<=n;ch++)
     {
        for(chc=n;chc>=ch;chc--)
        {
            cout<<chc<<" ";
        }
      cout<<endl;
     }
    return 0;
}