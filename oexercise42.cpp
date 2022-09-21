#include <iostream>
using namespace std;

class simpleCalculator{
    protected:
    int sum;
    int difference;
    int product;
    int division;
    int a,b;
    public:
       void setsum(int p, int q){
            a=p;b=q;
             sum = p+q;
             //return sum;
        }
        void setdifference(int p, int q){
            a=p;b=q;
            difference = a - b;
        }
        void setproduct(int p, int q){
            a=p;b=q;
            product = a * b;
        }
        void setdivision(int p, int q){
            a=p;b=q;
            division = a / b;
        }
};
class scientificCalculator{
    protected:
    int minimum;
    int maximum;
    int x,y;
    public:
          int getmin(int x, int y){
              minimum = min(x,y);
              return minimum;
          }
          int getmax(int x, int y){
              maximum = max(x,y);
              return  maximum;
          }
};
class HybridCalculator:public simpleCalculator,public scientificCalculator{
    public:
         void display(int run){
             //Q1:-What type of inheritance are you using?
             //Ans:-This is multiple Inheritance.
             //Q2:-Which mode of Inheritance are you using?
            //Ans:-Mode is public.
            if(run==1)
            cout<<"The sum of "<<a<<" and "<<b<<" is : "<<sum<<endl;
            if(run==2)

            cout<<"The difference of "<< a <<" and "<<b<<" is : "<<difference<<endl;
             if(run==3)
            cout<<"The product of "<<a<<" and "<< b <<" is : "<<product<<endl;
             if(run==4)
            cout<<"The division of "<< a <<" and "<< b <<" is : "<<division<<endl;
             if(run==5)
            cout<<"Minimum of "<< a <<" and "<< b <<" is : "<<getmin(a,b)<<endl;
             if(run==6)
            cout<<"Maximum of "<< a <<" and "<< b <<" is : "<<getmax(a,b)<<endl;
         }
};
int main() {
    HybridCalculator result;
    result.setsum(5,7);
        result.display(1);

    result.setdifference(9,2);
        result.display(2);

    result.setproduct(9,8);
        result.display(3);

    result.setdivision(16,4);
        result.display(4);

    result.getmin(11,20);
        result.display(5);

    result.getmax(14,10);
    result.display(6);

    return 0;
}

