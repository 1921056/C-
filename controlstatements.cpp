#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if (age<18){
    cout<<"u cannot vote"<<endl;
    }
 else if(age=18)
    {
    cout<<"congrats for ur new achievement to vote"<<endl;
    }
    else (age>18);
    {
    cout<<"u can vote"<<endl;
    }


cout<<"*******switch************"<<endl;

switch (age)
{
case 22:
cout<<"you are 22"<<endl;
    break;

case 2:
cout<<"you are 2"<<endl;
    break;

    case 20:
cout<<"you are 20"<<endl;
    break;
default:
cout<<"no one is there"<<endl;
    break;
}

    return 0;
}