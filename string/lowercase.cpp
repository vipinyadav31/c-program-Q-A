#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string str = "SHIVAM 909upta   helow";
    string low;
    n=str.length();

    for(int i = 0 ; i<n;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] +=32;
        }
    }
    cout<<str;
    return 0;
}
