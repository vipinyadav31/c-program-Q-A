// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,n1;
    cout<<"enter 2 no";
    cin>>n>>n1;
    while(n<=n1)
    {
        int f=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
         if(f==0)
           {
               cout<<n<<endl;
           }
        n++;
    }
    return 0;
}