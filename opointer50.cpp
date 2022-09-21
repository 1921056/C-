#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "the address of a : " << ptr << endl;
    cout << "the value of a : " << *(ptr) << endl;

    int *c = new int(40);
    cout << "the value of c :" << *c << endl;

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    delete[] arr;
    cout << " the value of arr[0] :" << arr[0] << endl;
    cout << " the value of arr[1] :" << arr[1] << endl;
    cout << " the value of arr[2] :" << arr[2] << endl;

    return 0;
}