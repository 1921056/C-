#include<iostream>
using namespace std;


int sum(int ,int );
void g(void);

int main()

{
    int num1,num2;//num1,num2 are  actual parameters.
cout<<"enter the first element:"<<endl;
cin>>num1;
cout<<"enter the second element:"<<endl;
cin>>num2;
cout<<"sum of two elements:"<<sum(num1 ,num2)<<endl;

    g();
    return 0;
}
// formal parameters are a and b which taking values from actual parameters.
int sum(int a,int b){
 int c;
 c=a+b;
 return c;   

}

void g(){
    cout<<"hello kishan"<<endl;
}