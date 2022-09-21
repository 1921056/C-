#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "this is me" << endl;
  
    out.close();

    string st,st2;
    ifstream in("sample60.txt");
    ifstream kishan("sampleb.txt");
  //  in >> st>>st2;
    //cout << st<<endl<<st2;
    while(in.eof ()==0)
    {
        getline(in,st);
         getline(kishan,st2);
        cout<<st<<endl;
        cout<<st2<<endl;
    }
    in.close();
    kishan.close();

    in.close();
    return 0;
}