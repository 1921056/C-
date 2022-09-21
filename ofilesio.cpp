#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //opening files using constructor and writing it 
   // string st="kishan bhai";
   // ofstream out("sample60.txt");//writing operation
   // out<<st;
    
    //opening files using constructor and reading it 
    string s2;
    ifstream in("sampleb.txt");//read operation 
    //in>>s2;
    getline(in,s2);

    cout<<s2;


    return 0;
}