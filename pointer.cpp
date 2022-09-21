#include<iostream>
using namespace std;

int main()
{
    // pointers
    int a=3;
    int* b=&a;
    cout<<"address of a:"<<&a<<endl;
cout<<"address of a:"<<b<<endl;

    cout<<"value at pointer b:"<<* b;
    cout<<endl;
    //pointer to pinter
    int** c=&b;
    cout<<"adreess of b:"<<&b<<endl;
    cout<<"addresss of b:"<<c<<endl;
    cout<<"value which store by pointer:"<<**c;


    return 0;
}