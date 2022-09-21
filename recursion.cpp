#include<iostream>
using namespace std;
  /*  int factorial(int n){
        if(n<=1){
            return 1;
        }
        return n * factorial(n-1);

    }*/

    //fabinochi series in which we will get 3rd number from addition of first and second numbers

    int fab(int n)
    {
     {   if(n<2)
        return 1;
    }
    return (n-1)+(n-2);
    }
int main()
{int a;
    cout<<"enter the value of a :\n";
    cin>>a;
   // cout<<"factorial of "<<a<<":"<<factorial(a)<<endl;
    cout<<"the next number in the fabnich series will be:"<<fab(a)<<endl;

}