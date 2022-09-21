#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "enter the id:";
        cin >> id;
        count ++;
    }
    void getdata()
    {
        cout << "The id of the employee is :" << id << endl<<"employee id is:"<<count<<endl;
             
    }

    static void getcount(){
        cout<<"The value of count :" << count<<endl<<endl;
    }
};
int employee::count;
int main()
{
    employee kishan, ankita, shivam;
    kishan.setdata();
    kishan.getdata();
    employee::getcount();

    ankita.setdata();
    ankita.getdata();
     employee::getcount();

    shivam.setdata();
    shivam.getdata();
     employee::getcount();

    return 0;
}