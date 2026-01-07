#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int start, int end, int size){
    if(start < end){
        swap(arr[start], arr[end]);
        reverse(arr, start+1, end-1, size);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, 0, size-1, size);
    printArray(arr, size);

    return 0;
}
