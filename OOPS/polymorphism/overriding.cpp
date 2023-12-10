#include<iostream>
using namespace std;

    class A{
 public:
      void disp(){
     cout<<"class A me hai";
    }
};
   class B:public A{
    public:
    void disp(){
        cout<<"class B me hai";
      }
   };

   main()
   { 
    
    A *ptr;
    B obj;
    ptr = &obj; 
    ptr->disp();
    // obj.disp();
    // obj.A::disp();
    
   }