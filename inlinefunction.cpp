#include <iostream>
using namespace std;
inline int sum( int a , int b ) //inline function
{
    return a+b+1;
}
int main()
{
    int a,b;
    cout<<"enter the values of a and b :";
    cin>>a>>b;
    cout <<"sum of a and b:"<<sum(a,b)<<endl;

    return 0;
}