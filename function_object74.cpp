#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;


// function object(functor) : function wrapped in a class so that it is available like an object 
int main(){
    int arr[] ={ 94, 95, 256 ,7 ,189};
    //sort(arr,arr+5);
    sort(arr,arr+5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
         cout<<arr[i]<<" ";

    }
    
   
    
    return 0;
}