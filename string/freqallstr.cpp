#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n, i, j;
    string str = "ssvvvbAASDFSDAb";
    n = str.length();
    for(i = 65;i<=90;i++)
    { 
       int    count =0;
     for(j = 0; j<n;j++)
     { 
        if((int)str[j]== i)
        {
            count++;
        }
     }
        // char num = static_cast<char>(i);
     if(count >0)
     {
        cout<<"it repeat ="<<(char)i<<"  with "<<count<<"times"<<endl;
     }
 
    }

}