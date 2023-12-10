#include <iostream>
#include<string>
using namespace std;
bool palan(string s)
{
     int n,l=0;
     n= s.length()-1;
     cout<<n;
     while(l <n)
     {
        if(s[l]==s[n])
        { 
            l++;
            n--;
            continue;
        }
        else
        {
            return false;
        }
        return true;
     }
}    
int main() {
     string s = "Adcdcda";
     
     if(palan(s))
     {
         cout<<"its p";
     }
     else
     {
         cout<<"it not pandrom";
     }
     return 0;
}