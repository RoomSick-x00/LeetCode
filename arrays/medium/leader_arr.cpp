#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &nums)
{
    int n = nums.size();
    vector<int> leader;
    int max_element = INT_MIN;
    int loc;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max_element)
        {
            max_element = nums[i];
            loc = i;
        }
    }

    if (loc != n - 1)
    leader.push_back(max_element);

    if (loc < n - 2)
    {
        for (int i = loc + 1; i < n - 1; i++)
        {
            int largest = nums[i];
            int count = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (largest >= nums[j])
                    count++;
                else
                    break;
            }
            if (count == n - 1 - i)
                leader.push_back(nums[i]);
        }
    }

    leader.push_back(nums[n - 1]);
    return leader;
}

vector<int> leaders_optimized(vector<int> &arr){
    int n = arr.size();
   
    vector<int> ans;
      
    int max = arr[n - 1];
    ans.push_back(arr[n-1]);
     
    for (int i = n - 2; i >= 0; i--){
        if (arr[i] > max) {
          ans.push_back(arr[i]);
          max = arr[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector <int> arr = {16, 17, 4, 3, 5, 2};
    
    vector<int>ans = leaders(arr);
    vector<int>ans1 = leaders_optimized(arr);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<ans.size(); i++){
        cout<<ans1[i]<<" ";
    }
    
    return 0;
}