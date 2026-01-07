class Solution {
public:
    bool check(vector<int>& nums) {
        int smallest = INT_MAX;
        int n = nums.size();
        int start = 0;
        int index = 0;
        // Find the index of the smallest element (rotation point)
        for (int i = 0; i < n; i++) {
            if (nums[i] < smallest) {
                smallest = nums[i];
                index = i + 1;
                if (smallest == nums[n - 1] && index - 1 != n - 1) {
                    for (int j = index; j < n; j++) {
                        if (nums[j] < smallest + 1) {
                            start = j;
                            break;
                        }
                    }
                }

                else start = i;
            }
        }

        // Check if the part after rotation point is sorted
        for (int i = start; i < n - 1; i++) {
            if (nums[i] > nums[i + 1])
                return false;
        }

        // Check if the part before rotation point is sorted
        for (int i = 0; i < start - 1; i++) {
            if (nums[i] > nums[i + 1])
                return false;
        }

        // Check the connection point (last element vs first)
        if (start != 0 && nums[n - 1] > nums[0])
            return false;
        return true;
    }
};
