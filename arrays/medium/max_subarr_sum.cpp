#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int max_sum =   INT_MIN;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += nums[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int main(){
    vector <int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int ans = maxSubArray(arr);

    cout<<ans;

    return 0;
}