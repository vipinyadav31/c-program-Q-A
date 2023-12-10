// inherite the properties of base classe in derived class


#include<iostream>
using namespace std;

class father{
   protected:
   string sname = "yadav";
};
class beta:father{
     string name ="vipin";
    public:
    void show(){
     cout<<name <<" " <<sname<<endl;
    }
};
class beta2:father{
     string name ="raj ";
     public:
     void disp(){
     cout<<name <<" " <<sname<<endl;
     }
};
 main()
{
  beta a;
  a.show();
  beta2 b;
  b.disp();
}