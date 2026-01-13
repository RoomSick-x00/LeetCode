#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for(int i=0; i<n; i++){
        int element = nums[i];
        for(int j=i; j<n; j++){
            if(element == nums[j]) count++;
        }
        if(count>n/2) return element;
        else count = 0;
    }
    return -1;
}

int majorityElement_better(vector<int>& nums) {
    int n = nums.size();

    map <int, int> freq;

    for(int i=0; i<n; i++){
        freq[nums[i]]++;
    }

    for(auto it:freq){
        if(it.second> (n/2)) return it.first;
    }
    return -1;
}


//uses moore's voting algo
int majorityElement_optimized(vector<int>& nums) { 
    int n = nums.size();
    int cnt = 0;
    int el;
    for(int i=0; i<n; i++){
        if(cnt == 0){
            cnt = 1;
            el = nums[i];
        }
        else if(nums[i] == el) cnt++;
        else cnt--;
    }

    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(el == nums[i]) cnt1++;
    }

    if(cnt1 > n/2) return  el;

    return -1;
}

int main(){
    vector <int> arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    int ans_better = majorityElement_better(arr);
    int ans_optimized = majorityElement_better(arr);

    cout<<ans<<endl;
    cout<<ans_better<<endl;
    cout<<ans_optimized<<endl;
}