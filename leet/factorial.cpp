#include <iostream>
using namespace std;

int fact = 1;
int Factorial(int n){
    if(n > 0){
        Factorial(n-1);
        fact = fact * n;
    }
    return fact;
}

int main(){
    cout<<Factorial(5);
    return 0;
}