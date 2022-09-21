#include <iostream>
using namespace std;
class employee
{

public:
    int id;
    float salary;
    employee(int impid)
    {
        id = 1;
        salary = 550;
    }

    employee() {}
};

class programmer : employee
{
public:
    int languagecode;
    programmer(int inpid)
    {
        id = inpid;
        languagecode = 9;
    }

    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee e1(5);
    cout << e1.salary << endl;
    cout << e1.id << endl;
    programmer skillf(10);
    cout << skillf.languagecode << endl;
    //  cout<<skillf.id<<endl;   it gives error ,beacause it is privately inherited solution is to make it publically inherited
    skillf.getdata();

    return 0;
}