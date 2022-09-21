#include<iostream>
using namespace std;

struct student{
    int rollno;
    char gender;
    float marks;

};

int main()

{
    struct student kishan;
    struct student ayush;
    kishan.rollno=1;
    kishan.gender='m';
    kishan.marks=55;
    cout<<"The detail of kishan rollno:"<<kishan.rollno<<endl;
    cout<<"The detail of kishan gender:"<<kishan.gender<<endl;
    cout<<"The detail of kishan marks:"<<kishan.marks<<endl;

    return 0;
}