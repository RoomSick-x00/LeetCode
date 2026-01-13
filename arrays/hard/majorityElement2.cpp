#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementBetter(vector<int> &nums){
    int n =  nums.size();
    map <int, int> freq;
    vector<int> ans;

    for(int i=0; i<n; i++){
        freq[nums[i]]++;
    }

    for(auto it: freq){
        if(it.second >n/3) ans.push_back(it.first);
        if(ans.size()==2) break;
    }
    return ans;
}

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    set<int> ans;
    for (int i = 0; i < n; i++)
    {
        int maj = nums[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (maj == nums[j])
                count++;
            if (count > (n / 3))
            {
                ans.insert(maj);
            }
        }
    }
    vector<int> answer(ans.begin(), ans.end());
    return answer;
}

int main()
{
    vector<int> nums = {3, 2, 3};
    vector<int> ans = majorityElement(nums);
    vector<int> ansBetter = majorityElementBetter(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}