#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++; 
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
    
    vector <int> arr = {0,0,1,2,0,2,2,1,1};

    sortColors(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}