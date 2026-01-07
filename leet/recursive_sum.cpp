#include <iostream>
using namespace std;

int Total = 0;
int sumN(int n){
    if(n > 0){
        sumN(n-1);
        Total = Total + n;
    }
    return Total;
}

int main(){
    cout<<sumN(5);
    return 0;
}