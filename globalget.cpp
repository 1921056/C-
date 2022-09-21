#include<iostream>
using namespace std;

int c=54;

int main()
{
  /*  int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;

    cout<<"enter the value of b:"<<endl;
    cin>>b;

    c=a+b;
    cout<<"sum of a+b:"<<c<<endl;
    cout<<"the value of global c:"<<::c<<endl<<endl;*/

    cout<<"using size of operator"<<endl<<endl;

    int x=3.64;
    cout<<"value of x when 3.64:"<<sizeof(3.64)<<endl;
    cout<<"value of x when 3.64f:"<<sizeof(3.64f)<<endl;
    cout<<"value of x when 3.64F:"<<sizeof(3.64F)<<endl;
    cout<<"value of x when 3.64l:"<<sizeof(3.64l)<<endl;
    cout<<"value of x when 3.64L:"<<sizeof(3.64L)<<endl;

    cout<<"reference variables"<<endl<<endl;
    int z=64;
    int &k=z;

    cout<<"value of z:"<<z<<endl; 
   cout<<"value of k:"<<k<<endl; 


    cout<<"typecasting"<<endl;
    float kishan=3.14;
    cout<<"value of kishan:"<<(int)kishan<<endl;
   
   return 0;

}