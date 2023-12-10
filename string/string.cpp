#include<iostream>
#include<string.h>
using namespace std;

int main()
{
//     string str1 ="vipin";
//     string str2 = "yadav";

//       str2.clear();
//      string fullname =str1.append(str2);
//  cout<<fullname<<fullname.size();
//  cout<<fullname[3];
    int i;
    string str = "vipin yadav what SGSDFG";
    for( i=0; i < str.size();i++)
    {
        if(str[i] >='a'&& str[i]<='z')
        {
            str[i] -=32;    
        }
    }
 cout<<str;
    return 0;
}