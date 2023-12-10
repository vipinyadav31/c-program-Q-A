#include<iostream>
#include<string>
using namespace std;

int main()
{    
    string  str = "abcd vipin yadav    q";
    int  count = 0;
    int n= str.length();
    

  cout<<n;
    for( int i=0;i<n;i++)
    {
        if((int)str[i] != 32)
        {
           str[count] = str[i];
           count++;
        }
        n--;
    }
     str[count] = '\0';
     cout<<str;
    return 0;
}
