#include <iostream>
using namespace std;

int main()
{
    int i, j;

    int arr1[5] = {2, 3, 5, 7, 8};
    int arr2[5] = {7, 4, 3, 64, 2};
    int arr3[5] = {7, 4, 3, 1, 2};
    cout << "intersection is";
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {

                if (arr1[i] == arr2[j]&& arr2[j]==arr3[k])
                {
                    cout << arr1[i] << " ";
                }
            }
        }
    }
    //
    return 0;
}