#include<iostream>
using namespace std;
/*
void swap(int ,int);
int main()

{
    int a=10,b=20;
    cout<<"before swap:"<<a<<"\nthe value of b:"<<b<<endl;
    swap(a,b);
   

}   
void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"the value of x:"<<x<<endl;
    cout<<"the value of y:"<<y<<endl;
*/

    //call by reference
    void swap(int* ,int*);
    int main()
{
    int a=10,b=20;
    cout<<"value of a:"<<a<<"\nvalue of b:"<<b<<endl;
    swap(&a,&b);
    cout<<"value of a:"<<a<<"\nvalue of b:"<<b<<endl;
}
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<"value of x:"<<*x<<"\nvalue of y:"<<*y<<endl;
}
