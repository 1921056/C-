#include<iostream>
using namespace std;
int main()
{

    int a[]={23,45,56,855};

    cout<<"value at that position will be "<<a[0]<<endl;
    cout<<"value at that position will be "<<a[1]<<endl;
    cout<<"value at that position will be "<<a[2]<<endl;
    cout<<"value at that position will be "<<a[3]<<endl;

int* p=a;
cout<<"the value of a[0]:"<<*p<<endl;
cout<<"the value of a[1]:"<<*(p+1)<<endl;
cout<<"the value of a[2]:"<<*(p+2)<<endl;
cout<<"the value of a[3]:"<<*(p+3)<<endl;

cout<<"the value of a[0]:"<<&p+1<<endl;
cout<<"the value of a[1]:"<<&p+2<<endl;
cout<<"the value of a[2]:"<<&p+3<<endl;
cout<<"the value of a[3]:"<<&p+4<<endl;

return 0;
}