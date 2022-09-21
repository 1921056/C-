#include <iostream>
using namespace std;
    class complex{
        int real,imaginary;
        public:
        void setdata(int i,int j){
            real=i;
            imaginary=j;
        }
        void getdata(void){
            cout<<"Enter the value of real number :"<<real<<endl;
            cout<<"Enter the value of imaginary number :"<<imaginary<<endl;

        }
    };
int main(){
    //complex c;
   // complex * ptr=&c;
   // c.setdata(4,5);
    //c.getdata();
    complex *ptr=new complex;
    //(*ptr).setdata(6,5);
    //(*ptr).getdata();//dot operator and brackets  is compulsory because dot operator has higher precedance than * operator 

    ptr->setdata(7,8);
    ptr->getdata();
    return 0;
}