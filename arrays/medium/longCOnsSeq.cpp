#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();

    int longConsSeq = 0;
    sort(nums.begin(), nums.end());
    int CurrConsSeq = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i-1]+1)
        {
            CurrConsSeq++;
            longConsSeq = max(longConsSeq, CurrConsSeq);
        }
        else if(nums[i] == nums[i-1])
            continue;
        else
            CurrConsSeq = 0;
    }
    return longConsSeq+1;
}

int main(){
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout<<longestConsecutive(arr);
    return 0;
}