#include<iostream>
using namespace std;

class employee{
    private :
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);
        void getdata(){
            cout<<"value of a:"<<a<<endl;
            cout<<"value of b:"<<b<<endl;
            cout<<"value of c:"<<c<<endl;
            cout<<"value of d:"<<d<<endl;
            cout<<"value of e:"<<e<<endl;
        }

};

void employee :: setdata(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee kishan;
    kishan.setdata(1,2,3);
    kishan.d=4;
    kishan.e=5;
    
    kishan.getdata();

    return 0;
}