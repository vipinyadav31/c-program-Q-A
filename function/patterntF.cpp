// Q12 ka 6th 
#include<iostream>
using namespace std;
void pat(int a)
{
   for(int i=1;i<=a;i++)
    {
        for(int j=a;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return;
}
int main()
{
    int a;
    cin>>a;
    pat(a);
    return 0;
}





// Q12 ka 4th
#include<iostream>
using namespace std;
 void pat(int a)
{
   for(int i=1;i<=a;i++)
    {
        for(int j=a;j>=i;j--)
        {
            cout<<" ";
        }
        for(int y=a;y<=1;y--)
    {
        for(int x=1;x>=y;x++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    }

    return;
}
  int main()
    {
    int a;
    cin>>a;
    pat(a);
    return 0;

}