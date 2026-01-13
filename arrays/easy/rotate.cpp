#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int k = 0;
    int size = k % n; //1
    int temp[size];

    for (int i = 0; i < size; i++){
        temp[i] = arr[n - size + i];
    }

    for (int i = 0; i < size; i++){
        cout << temp[i] << " ";
    }
    cout<<endl;

    for(int i=n-1; i>size-1; i--){
        arr[i]=arr[i-size];
    }

    for(int i=0; i<size; i++){
        arr[i]=temp[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}