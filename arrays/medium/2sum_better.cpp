#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int i = 0; n; i++)
    {
        int num = nums[i];
        int needed = target - num;

        if (mpp.find(needed) != mpp.end())
        {
            return {mpp[needed], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}