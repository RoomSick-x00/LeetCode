#include <iostream>
using namespace std;

int main(){
   
   int a=10;

   int *ptr = & a;

   int **q = &ptr;

   cout<<a<<endl;
   
   cout<<&a<<endl;

   cout<< ptr <<endl;

   cout<< * ptr <<endl;

   cout << q<<endl;   
   
   cout << *q<<endl;   
  
   cout << **q<<endl;   
   
   cout << &ptr<<endl;

   cout << &q <<endl;   
   
    return 0;
}