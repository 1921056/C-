#include <iostream>
using namespace std;
    class base1{
        public:
       void greet()
        {
               cout<<endl;
            cout<<"how are you"<<endl;

        }
    };

         class base2{
        public:
       void greet()
        {
            cout<<"kaise ho ?"<<endl;
               cout<<endl;
        }

    };

     class derived :public base1,public base2{
         int a;
         public:
         void greet(){
         base2 :: greet();
         cout<<endl;
         }


     };

     class b{
         public:
         void say(){
             cout<<"hello world"<<endl;
            
         }
     };

     class yogesh:public b{
         public:
         void say(){
             //yogesh's class new say wilbasel override class say() method 
             cout<<"hello i am kishan"<<endl;
         }
     };

int main(){
    base1 kishan;
    base2 ankita;
     derived d;
     kishan.greet();
     ankita.greet();
     d.greet();

     yogesh shivam;
     shivam.say();

     b anshu;
     anshu.say();

     
     

    return 0;
}