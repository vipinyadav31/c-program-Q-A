#include<iostream>
using namespace std;
class shivam;
class vipin{
    private:
  int  money = 20;
  friend void raj(vipin , shivam);
};
class shivam{
 private:
 int money =30;
 friend void raj(vipin , shivam);

};

 void raj(vipin val1 ,shivam val2){
    cout<<"sum is "<<val1.money+val2.money;
}
main()
{
    vipin ob1;
    shivam ob2;
    raj(ob1,ob2);
}