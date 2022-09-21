#include <iostream>
using namespace std;
 class kishan{
     int a;
     public:
    // void setdata(int a){
         //this->a=a;
        kishan &  setdata(int a){
            this->a=a;
            return *this;
     }

     void getdata(void){
         cout<<"The value of a : "<<a<<endl;
     }
 };

int main(){
    kishan k;
   // k.setdata(5);
   // k.getdata();
   k.setdata(4).getdata();

    
    
    return 0;
}