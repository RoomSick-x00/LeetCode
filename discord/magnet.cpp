#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int groups = 0;

    for(int i=1;i<n;i++){
        if(arr[i] == 01 && arr[i-1] == 10){
            groups++;
        }
        else if(arr[i] == 10 && arr[i-1] == 01){
            groups++;

        }
    }

    cout<< groups+1 <<endl;

    return 0;
}
