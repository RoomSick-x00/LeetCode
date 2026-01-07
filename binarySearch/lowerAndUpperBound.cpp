#include <bits/stdc++.h>
using namespace std;

// 1 3 3 5 6 6 10

class Solution {
public:
    // First index where arr[i] >= target
    int lowerBound(const vector<int> &arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = arr.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    // First index where arr[i] > target
    int upperBound(const vector<int> &arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = arr.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int countOccurrences(const vector<int>& arr, int target) {
        int l = lowerBound(arr, target);
        int r = upperBound(arr, target);
        return r - l;
    }
};


int main()
{

    int lb = -1, ub = -1;

    cout << lb << " " << ub;
    return 0;
}