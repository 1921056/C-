#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    int salary;

public:
    void setdata()
    {
        salary=101;
        cout<<"bonus :"<<salary<<endl;
        cout << "enter the id :";
        cin >> id;
    }
    void getdata()
    {
        cout << "The id of emloyee is:" << id << endl<<endl;
    }
};
int main()

{
    employee kishan;
    //kishan.setdata();
    //kishan.getdata();

    employee company[4];
    for (int  i = 0; i < 4; i++)
    {
        company[i].setdata();
        company[i].getdata();
    }

    kishan.setdata();
    
    return 0;
}