#include<iostream>
#include<string.h>
 using namespace std;

int main()
{
    int n,i,j,maxf=0,value=0;
    string str ="ssvvvbb";
    n=str.size();
    for(i=0; i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(str[i] ==str[j])
            {
                count++;
            }
        }
        if(count>maxf)
        {
            maxf = count;
            value =str[i]; 
        }
    }
    // char val = static_cast<char>(value);
    
    cout<<"frecuvency"<<maxf<<endl;
    cout<<"character"<<value;

}