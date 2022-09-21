#include <iostream>
using namespace std;
    class simple{
      int a,b;
      public:
        simple(int x,int y= 7){
            a=x;
            b=y;
        }

        void display()
        {
            cout<<"numbers are "<<a<<"and"<<b<<endl; 
        }
    };
int main(){
    simple s(4);
    s.display();
    
    return 0;
}