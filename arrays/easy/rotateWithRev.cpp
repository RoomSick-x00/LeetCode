#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int k = 2;
    int size = k % n; //1
    int temp[size];

    reverse(arr, arr+size);
    reverse(arr+size, arr+n);
    reverse(arr, arr+n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}