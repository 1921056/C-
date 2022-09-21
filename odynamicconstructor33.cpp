#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float rate;
    int returnvalue;

public:
bankdeposit(){}

bankdeposit(int p,int y,float r);
bankdeposit(int p,int y,int R);

void show(){
    cout<<" Initially principal was  "<<principal<<" after "<<years <<" years principal becomes :"
    <<returnvalue<<endl;
}
};

bankdeposit::bankdeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    rate=r;
    returnvalue=principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * ( 1 + r );
    }
    
}

bankdeposit::bankdeposit(int p,int y,int r)
{
    principal=p;
    years=y;
    rate=float(r)/100;
    returnvalue=principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * ( 1 + rate );
    }
    
}

int main()
{
    bankdeposit b1,b2,b3;
    int p,y,R;
    float r;
   
    b3.show(); 
   cout<<"enter the values of p, y, and r"<<endl;
   cin>>p>>y>>r;
   b1=bankdeposit(p,y,r);
   b1.show();

   cout<<"enter the values of p, y, and R"<<endl;
   cin>>p>>y>>R;
   b2=bankdeposit(p,y,R);
   b2.show();
    return 0;
}