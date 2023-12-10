#include<iostream>
using namespace std;

int main()
{
    char  c;
    cout<<"plz enter charctor.";
    cin>>c;
    int upp,low;
    upp =(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    low =(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    if(upp||low)
    {
        cout<<"this is vowel";
    }
    else
    {
        cout<<"THis is consonale";
    }
    return 0;
}