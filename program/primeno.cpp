// #include<iostream>
// using namespace std;

// int main()
// {
//   int i,n,m=0,flag=0;
//   cout<<"Plz enter a no to check it is prime or not";
//   cin>>n;
//   m =n/2;
//   for(i=2;i<=m;i++)
//   {
//     if(n%i==0)
//     {
//       cout<<"this is not a prime no."<<endl;
//       flag=1;
//       break;
//     }
//   }
//     if(flag==0)
//     {
//       cout<<"This is a prime no."<<endl;
//     }
//   return 0;
// }

// this is new method of prime no.
// every prime no is divided by 1 or itself that's mean it only divided by 2 time then
#include<iostream>
using namespace std;

int main()
{
  int a,b,check=0;
  cout<<"Enter a no the check the prime";
  cin>>a;
  for(b=1;b<=a;b++)
  {
     if(a%b == 0)
     {
     check++;
     }
   }
   if(check==2)
   {
      cout<<"This is the prime no ";
   }
   else
   {
      cout<<"THis is not prime no.";
   }
  return 0;
}