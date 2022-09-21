#include <iostream>
using namespace std;

class complex; // forward declaration

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex,complex);
};

class complex
{
    int a, b;

public:

    friend int calculator :: sumrealcomplex(complex o1, complex o2);
    friend int calculator :: sumcompcomplex(complex o1, complex o2);
    int setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumbers()
    {
        cout << "your complex numbers are  " << a << "+" << b << "i" << endl;
    }
};

int calculator::sumrealcomplex(complex o1, complex o2)
{

    return (o1.a + o2.a);
}

int calculator::sumcompcomplex(complex o1, complex o2)
{

    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o1.printnumbers();

    o2.setnumber(2, 5);
    o2.printnumbers();

    calculator calc;
    int result =calc.sumrealcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 :"<<result<<endl;

    int res =calc.sumcompcomplex(o1,o2);
    cout<<"the sum of imaginary part of o1 and o2 :"<<res<<endl;
    return 0;
}