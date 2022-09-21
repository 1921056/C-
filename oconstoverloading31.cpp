#include <iostream>
using namespace std;
    class complex{
        int a,b;
        public:
        complex (int x, int y ){
            a=x;
            b=y;
        }

        complex (int x ){
            a=x;
            b=0;
        } 

        void printnumbers()
        {
            cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl<<endl; 
        }
    };
    
int main(){
    complex c1(4,5);
    c1.printnumbers();

    complex c2(8);
    c2.printnumbers();
    
    return 0;
}