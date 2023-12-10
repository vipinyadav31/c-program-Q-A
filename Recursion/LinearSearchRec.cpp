#include<iostream>
using namespace std;
bool Search(int arr[] ,  int size , int  k)
{
    if(size == 0 )
    {
        return false;
    }
    if(arr[0] == k)
    {
        return true;
    }
    int  reampart = Search(arr+1 , size -1 , k);
    return reampart;
}  

int main()
{
    int  arr[5] = {1,6,3,7,3};
    int size  = 5 ;
     int key = 3;
     int ans  = Search(arr, size , key );
   if (ans)
   {
    cout<<"present ";

   }
   else
   {
    cout<< " absent ";
   }
    return 0;
}