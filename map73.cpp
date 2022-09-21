#include <iostream>
#include <string>
#include <map>

using namespace std;

//map is an associstive array

int main(){

    map<string, int> marksmap;
    marksmap["kishan "] =98;
    marksmap["ankita "] =93;
    marksmap["harsh "] =88;

marksmap.insert({{"kishan",189},{"santosh",567}});
    map<string, int> :: iterator iter;
   for(iter=marksmap.begin();  iter!=marksmap.end(); iter++)
   {
       cout<<(*iter).first<<" ";
        cout<<(*iter).second<<" ";
        cout<<endl;
        
   }
    

    cout<<marksmap.size()<<endl;
      cout<<marksmap.max_size()<<endl;
     
    
    return 0;
}