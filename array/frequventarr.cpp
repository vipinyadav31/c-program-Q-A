#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "size of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // code
    int maxcount = 1, value =0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i ; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
         if (count >= maxcount)
        {
            maxcount = count;
            value = arr[i];
        }
    }
    cout<<"frequent item"<<value;
    cout<<"freequent time "<<maxcount;
}