#include<iostream>
using namespace std;

int sum(int a,int b, int c){

    return (a+b+c);
    cout <<" i am the function with three arguments"<<endl;
}
int sum(int a,int b){
     return (a+b);

    cout <<" i am the function with two arguments"<<endl;
}

//Examples of volumes

int  volume(int r ,int h )
{// volume of cylinder
    return (3.14 * r * r *  h);

}
int volume (int a)// volume of cube
{
    return (a*a*a);
}
int volume(int l,int b,int h){
    return (l*b*h);
}

int main()
{
    cout<<"the fuction with two arguments:"<<sum(2,3)<<endl;
    
    cout<<"the fuction with three arguments:"<<sum(2,3,7)<<endl;
    cout<<"the volume of rectangle:"<<volume(2,3,7)<<endl;
    cout<<"the volume of cube:"<<volume(2)<<endl;
    cout<<"the volume of cuboid:"<<volume(2,3)<<endl;
    
    return 0;
}



