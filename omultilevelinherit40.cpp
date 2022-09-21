#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student :: set_roll_number(int r){
    roll_number=r;
}

void student :: get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}

class exam: public student {
    protected :
    float maths;
    float physics;
    public:
    void set_marks(float ,float);
    void get_marks(void);
};


void exam :: set_marks(float m,float p){
    maths=m;
    physics=p;

};

void exam :: get_marks(){
    cout<<"The marks obtained in maths subject are  "<<maths<<endl;
    cout<<"The marks obtained in physics subject are  "<<physics<<endl;
};

class result :public exam{
    float percentage;
    public:
    void display (){

        cout<<"percentage of marks obtained :"<<(((physics+maths)/200)*100)<<" %"<<endl;
    }
};

int main()
{
    result kishan;
    kishan.set_roll_number(23);
    kishan.get_roll_number();
    kishan.set_marks(54.6,74.6);
    kishan.get_marks();
    kishan.display();
   
    

    return 0;
}