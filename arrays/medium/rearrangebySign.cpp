#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> positive;
    vector<int> negative;
    for(int i=0; i<n; i++){
        if(nums[i] > 0){
            positive.push_back(nums[i]);
        }
        else{
            negative.push_back(nums[i]);
        }
    }
    
    int ptrN = 0;
    int ptrP = 0;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            nums[i] = positive[ptrP];
            ptrP++;
        }
        else{
            nums[i] = negative[ptrN];
            ptrN++;
        }
    }
    return nums;
}

int main(){
    vector<int> arr = {3,1,-2,-5,2,-4};

    vector<int> ans = rearrangeArray(arr);

    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<<ans[i] <<" ";
    }

    return 0;
}