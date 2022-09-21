#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    friend complex sumcomplex(complex o1, complex o2);
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumbers()
    {
        cout << "complex numbers are :" << a << "+" << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, kishan;
    c1.setnumber(1, 4);
    c1.printnumbers();

    c2.setnumber(2, 5);
    c2.printnumbers();

    kishan= sumcomplex(c1, c2);
    kishan.printnumbers();

    return 0;
}