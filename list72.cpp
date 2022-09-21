#include <iostream>
#include <list>

using namespace std;

void display(list<int> &v)
{
    list<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
}

int main()
{

    list<int> list1; //list of zero length

    list1.push_back(5);
    list1.push_back(46);
    list1.push_back(38);
    list1.push_back(277);
    list1.push_back(1);
    display(list1);

    //removing elements from the list

   // list1.pop_back();
   // list1.pop_back();
   // list1.pop_front();
  // list1.remove(3);

  // sorting the list 
  //list1.sort();
  //display(list1);

  // reversing the list 
  //list1.reverse();



  list<int> list2(2); //empty list of size 5

    list<int>::iterator iter;
    iter = list2.begin();

   
    *iter = 45;
    iter++;
    *iter = 50;
    iter++;
    display(list2);
    list1.merge(list2);
    cout<<"list 1 after merging : ";
    display(list1);

    return 0;
}