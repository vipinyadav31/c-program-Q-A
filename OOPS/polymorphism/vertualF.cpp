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
     virtual void disp(){
        cout<<"class B me hai";
      }
   };

   main()
   { 
    
    // A *ptr;
    B obj;
    obj.disp();
    // ptr = &obj; 
    // ptr->disp();
    // obj.disp();
    // obj.A::disp();
    
   }