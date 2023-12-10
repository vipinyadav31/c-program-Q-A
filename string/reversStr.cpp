// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
 
  int i , j ,n, temp;
    string str;
    
    getline (cin , str);
    cout<<str;
    n = str.length();
    cout<<n;
//   reverers
    for(i=0 , j=n-1 ; i<n/2;i++,j--)
    { 
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
    }
    for(i = 0 ; i<n ; i++)
    {
        cout<<str[i];
    }
    return 0;
}
