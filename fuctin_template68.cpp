#include <iostream>
using namespace std;

void func(int a)
{
    cout<<"i am first func ()"<<a<<endl;
}


    template <class t>
    void func(t a)
    {
        cout<<" i am templatised func ()"<<a<<endl;
    }

    template <class t>
    void func1(t a)
    {
        cout<<" i am templatised func1()"<<a<<endl;
    }
int main(){
    func(4);
    func1(4);
    
    return 0;
}