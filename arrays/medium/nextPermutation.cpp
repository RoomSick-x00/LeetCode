#include <bits/stdc++.h>
using namespace std;

void nextPermutation1(vector<int>& nums) {
    int n = nums.size();
    int pivot = -1;

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            pivot = i;
            break;
        }
    }
    if (pivot != -1) {
        for (int i = n - 1; i >= pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }
    }
    reverse(nums.begin() + pivot + 1, nums.end());
}

int main(){
    int arr[3] = {1,2,3};
    nextPermutation1(arr);
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}