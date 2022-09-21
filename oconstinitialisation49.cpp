#include <iostream>
using namespace std;
    class test{
        int a;
        int b;
        public:
        test (int i , int j): a(i), b(j){
                cout<<"contructor initialised"<<endl;
                cout<<"value of a : "<<a<<endl<<"value of b : "<<b<<endl;
        }
    };
int main(){
    test t(4,5);

    
    
    return 0;
}