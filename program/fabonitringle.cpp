#include <iostream>
using namespace std;

int main()
{
    int n, c, next, f = 0, s = 1; // f=first and s= second
    cout << "Enter no.";
    cin >> n;
    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = f + s;
            f = s;
            s = next;
        }
        cout << "\n"<< next;
    }
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<=a;b++)
        {
            cout<<next;
        }
        cout<<"\n"; 
    }
    return 0;
}
