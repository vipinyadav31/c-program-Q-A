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
        cout << "\n" << next;
    }
    return 0;
}
