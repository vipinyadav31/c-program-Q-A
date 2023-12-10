#include<iostream>
using namespace std;

 class info{
    string name;
    int age;

    public:
    void input(){
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter age";
        cin>>age;
    }
    void show(){
        cout<<"Name is " <<name<<endl;
        cout<<"age is " <<age<<endl;
    }
 };

 main()
{
    info v ,r;
       v.input();
       r.input();
    
     v.show();;
     r.show();;


}