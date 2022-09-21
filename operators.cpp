#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;

    cout<<"The value of a+b:"<<a+b<<endl;
    cout<<"The value of a-b:"<<a-b<<endl;
    cout<<"The value of a*b:"<<a*b<<endl;
    cout<<"The value of a/b:"<<a/b<<endl;
    cout<<"The value of a%b:"<<a%b<<endl;
    cout<<"The value of a++:"<<a++<<endl;
    cout<<"The value of a--:"<<a--<<endl;
    cout<<"The value of ++a:"<<++a<<endl;
    cout<<"The value of --a:"<<--a<<endl<<endl;

    cout<<"following are the comaprison operator";
    cout<<"value of a==b:"<<(a==b)<<endl;
    cout<<"value of a<=b:"<<(a<=b)<<endl;
    cout<<"value of a>=b:"<<(a>=b)<<endl;
    cout<<"value of a!=b:"<<(a!=b)<<endl;
    cout<<"value of a<b:"<<(a<b)<<endl;
    cout<<"value of a>b:"<<(a>b)<<endl<<endl;

    cout<<"following are the logical operators"<<endl;
    cout<<" value of and operator ((a==b)&&(a>b)):"<<((a==b)&&(a>b))<<endl;
    cout<<" value of and operator ((a==b)||(a>b)):"<<((a==b)||(a>b))<<endl;
    cout<<" value of and operator ((!(a==b)):"<<(!(a==b))<<endl;

return 0;
}
