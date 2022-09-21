#include <iostream>
using namespace std;
        class complex {
        int a,b;
        public:
        complex(int ,int );
        void printnumbers()
        {
            cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
        }
    };
complex :: complex (int x,int y)
{
    a=x;
    b=y;
}
int main(){
    //inplicit call
    complex c(4,5);
    c.printnumbers();

    //explicit call
    complex b=complex (7,5);
    b.printnumbers();
    
    return 0;
}