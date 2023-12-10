#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    // double a=20.50;
    string  str = "aaaabbbccddeeffgghh";
    int n = str.length();
    for(int i=0;i<n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            {
                for(int k=j;k<n;k++)
                {
                     str[k] =str[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for( int i=0;i<n;i++)
    {
      
    char value = static_cast<char>(str[i]);
    cout<<value<<endl;
    }


//    char num = static_cast<char>(n);
 return 0;

}