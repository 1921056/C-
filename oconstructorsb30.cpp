#include <iostream>
using namespace std;
    class point {
        int x,y;
        public:
        point ( int a,int b)
        {
            x=a;
            y=b;
    }
    void display(){
        cout<<" the points are ("<<x<<","<<y<<")"<<endl;
    }

    };
int main(){

    point p(4,5);
    p.display();

    point q(6,7);
    q.display();
    return 0;
}