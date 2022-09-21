#include <iostream>
using namespace std;

class shop
{
    int item_id;
    int item_price;

public:
    int itemselected;
    void setprice();
    void displayprice();
};

void shop::setprice()
{
    int i;
    cout << "enter the no. of item selected:";
    cin >> itemselected;
    for (i = 0; i <= itemselected; i++)
    {

        cout << "enter the item id :";
        cin >> item_id;
        cout << "enter the price of " << item_id << ":";
        cin >> item_price;

         cout<<"The entered item  "<<item_id<<" is "<<"and price of item is "<<item_price<<endl;
    }
}

void shop::displayprice()
{
   
}

int main()
{
    shop k;
    k.setprice();
    
    

    return 0;
}