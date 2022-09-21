#include <iostream>
using namespace std;
    class base1{
        int data1;
        public:
        base1(int i){
            data1=i;
            cout<<"base1 constructor called"<<endl;
        }

        void printdata_base1(void){
            cout<<"the value of data 1 :"<<data1<<endl;
            
        }
    };

    class base2{
        int data2;
        public:
        base2(int j){
            data2=j;
            cout<<"base2 constructor called"<<endl;
        }

        void printdata_base2(void){
            cout<<"the value of data 1 :"<<data2<<endl;
            
        }
    };

    class derived:public base1,public base2{
        int data3,data4;
        public:
        derived (int a,int b,int c,int d):base1(c), base2(d){
            data3=a;
            data4=b;
            cout<<"derived class constructor called"<<endl;
        }
        void printdata(void){
            cout<<"the value of data 3 :"<<data3<<endl;
             cout<<"the value of data 4 :"<<data4<<endl;
            
        }

    };
int main(){
    derived d(1,2,3,4);
    d.printdata_base1();
     d.printdata_base2();
      d.printdata();
    return 0;
}