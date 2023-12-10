#include<iostream>
using namespace std;

int main()
{
    int i,n,a=0,b=0;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int arrP[10] ,arrN[10];
    for(int j=0;j<n;j++)
    {
        if(arr[j]<=0)
        {
            arrN[a++] = arr[i];
        }
        // else if(arr[j]>=0)
        // {
        //     arrP[b++] = arr[i]; 
        // }
    }
    for(i=0;i<a;i++)
    {
        cout<<arrN[i];
    }
    
    
    
    // for(i=0;i<a;i++)
    // {
    //     cout<<arrN[i];
    // }
    // for(i=0;i<b;i++)
    // {
    //     cout<<arrP[i];
    // }

//     for(i=0;i<n;i++)
//     { 
//         if(i ==0)
//         {
//             cout<<arrP[i];
//         }

//          else if(i%2==0)
//         {
//             cout<<arrP[i];
//         }
//         else{
//             cout<<arrN[i];
//         }

//     }
    
    return 0;
}