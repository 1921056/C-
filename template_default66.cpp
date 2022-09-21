#include <iostream>
using namespace std;
template<class t1=int ,class t2=float ,class t3=char>
    class kishan{
        public:
        t1 a;
        t2 b;
        t3 c;
        kishan(t1 x,t2 y ,t3 z)
        {
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<"value of a:"<<a<<endl;
             cout<<"value of b:"<<b<<endl;
             cout<<"value of c:"<<c<<endl;
        }

    };
int main(){
    kishan <>obj(3,6.4,'c');
    obj.display();
    
    cout<<endl;
    kishan <float,double,char> g(5.6666,6.5,'b');
    g.display();
    


    
    return 0;
}