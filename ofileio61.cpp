#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream hout("sample60.txt");
    cout << "enter your name :";
    string name;
    cin >> name;
    hout << "my name is " + name;
    hout.close();
    ifstream hin("sample60.txt");
   
    string content;
    hin>>content;
   
    cout<<"The content of the file is :"<<content <<endl;
    
    hin.close();
    return 0;
}