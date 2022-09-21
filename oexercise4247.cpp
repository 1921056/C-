#include <iostream>
#include<cmath>
using namespace std;
class simplecalcilator{
    int a;
    float b;
    public:
    void getdata_simple()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
         cout<<"enter the value of b"<<endl;
        cin>>b;
    }

    void perform_operations_simple()
    {
        cout<<"the values of a+b id :"<<a+b<<endl;
         cout<<"the values of a-b id :"<<a-b<<endl;
          cout<<"the values of a*b id :"<<a*b<<endl;
           cout<<"the values of a/b id :"<<a/b<<endl<<endl;
    }

};

class scientificcalculator{
    int a;float b;
    public:
     void getdata_scientific()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
         cout<<"enter the value of b"<<endl;
        cin>>b;
    }

    void perform_operations_scientific()
    {
        cout<<"the values of cos(a) id :"<<cos(a)<<endl;
         cout<<"the values of sin(a) id :"<<sin(a)<<endl;
          cout<<"the values of tan(a) id :"<<tan(a)<<endl;
           cout<<"the values of exp(a) id :"<<exp (a)<<endl;
    }

};

class hybrid_calculator:public simplecalcilator,public scientificcalculator
{   
    public:
    void result()
    {
        getdata_simple();
        perform_operations_simple();
        getdata_scientific();
        perform_operations_scientific();

    }

};
int main(){
    //simplecalcilator calc;
    //calc.getdata();
    //calc.perform_operations();
    
    //scientificcalculator calc;
    //calc.getdata();
    //calc.perform_operations();
    hybrid_calculator r;
    r.result();

    
    return 0;
}