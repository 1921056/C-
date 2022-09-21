#include <iostream>
using namespace std;
 class baseclass
    {
        public:
        int var_base;
       virtual void display()
        {

            cout<<endl<<"displaying the base class variable var_base : "<<var_base<<endl<<endl;

        }
    };

     class derivedclass:public baseclass
     {
        public:
        int var_derived=500;
        void display()
        {
            cout<<endl<<"displaying the base class variable var_derived : "<<var_derived<<endl<<endl;

        }
    };
int main(){
     baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = & obj_derived;
    base_class_pointer->var_base=34;
    
    base_class_pointer->display();

    base_class_pointer->var_base=500;


    
    return 0;
}