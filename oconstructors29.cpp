#include <iostream>
using namespace std;
    class complex {
        int a,b;
        public:
        complex(void);
        void printnumbers()
        {
            cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
        }
    };
complex :: complex (void)//this is default constructor which takes no argument .
{
    a=4;
    b=5;
}

int main(){
    complex c;
    c.printnumbers();
    
    return 0;
}