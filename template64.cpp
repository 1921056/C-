#include <iostream>
using namespace std;

template <class t>
class vector
{
public:
    t * arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new t[size];
    }
    t dotproduct(vector &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<double> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.4;
    v1.arr[2] = 4.4;

    vector<double> v2(3);
    v2.arr[0] = 8.4;
    v2.arr[1] = 9.4;
    v2.arr[2] = 0.4;

    double a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}