#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int a=3;
    cout<<a;

    cout<<"manipulators"<<endl;
    int b=8,c=84,d=4562;
    cout<<"value of b without setw:"<<b<<endl;
    cout<<"value of c without setw:"<<c<<endl;
    cout<<"value of d without setw:"<<d<<endl;

    cout<<"value of b without setw:"<<setw(4)<<b<<endl;
    cout<<"value of c without setw:"<<setw(4)<<c<<endl;
    cout<<"value of d without setw:"<<setw(4)<<d<<endl;
    return 0;
}