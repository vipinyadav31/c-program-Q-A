// we can hide data with the help of access specifier "private";
// we can only access the private data when we use function in the class

#include<iostream>
using namespace std;

class encap{
    int age;
    public:
    string name;
     void setage(int f){
           age = f;
           cout<<"age is  "<<age<<endl;
     }
};

 main()
{
   encap a;

    a.setage(44);
   a.name="vipin";
  cout<<a.name;
}