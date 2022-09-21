#include <iostream>
using namespace std;
    class shop{
        int id;
        int price;
        public:
        void setdata(int a,int b){
            id=a;
            price=b;
        }

        void getdata(void){
            cout<<"code of item is "<<id<<endl;
            cout<<"price of this item is "<<price<<endl<<endl;
        }

        
    };
int main(){
    int size =2;
    shop *ptr = new shop[size];
    shop *ptrtemp=ptr;
    int p,i;
    int q;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter he id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"item number : "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
     
    
    return 0;
}