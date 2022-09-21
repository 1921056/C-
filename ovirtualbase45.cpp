#include <iostream>
using namespace std;
    class student {
        protected :
        int roll_number;
        public:
        void set_number(int k){
            roll_number=k;
        }
        void print_rollnumber(){
            cout<<"Your rollno is "<<roll_number<<endl;
        }
    };

    class test:virtual public student{
        protected:
        int physics,chemistry;
        public:
        void set_paper(int a,int b){
            physics=a;
            chemistry=b;
        }

        void print_marks(){
            cout<<"marks obtained in physics "<<physics<<" and in chemistry is "<<chemistry<<endl;
        }
    };

    class sports{
      protected:
        int marks;
        public:
        void set_marks(int v){
                marks=v;
        }

        void print_sports(){

        cout<<"the marks in sports  "<<marks<<endl;
        }

       
    };

class result: public test,public sports{
    protected:
    int total;
    public:
    void display(){
         total=physics+chemistry+marks;
         print_rollnumber();
         print_marks();
         print_sports();
         cout<< "The total marks obtained by kishan is "<<total<<endl;
    }
};

int main(){

    
    result r;
    r.set_number(5);
    r.set_paper(90,96);
    r.set_marks(99);
    r.display();

    

    return 0;
}