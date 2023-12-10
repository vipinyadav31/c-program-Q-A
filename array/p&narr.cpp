#include <iostream>
using namespace std;

int main()
{
    int i, j = 0, n;
    cout << "Enter size of array";
    cin >> n;
    int arr[n], arr1[n];
    cout << "enter element";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //   code
    for (i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
        {
            arr1[j++] = arr[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            arr1[j++] = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}