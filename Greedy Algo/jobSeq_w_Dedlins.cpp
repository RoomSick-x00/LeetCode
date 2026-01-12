#include <bits/stdc++.h>
using namespace std;

// Structure to represent a job
struct Job {
    int id;      // Job ID
    int dead;    // Deadline of job
    int profit;  // Profit of job
};

// Comparison function to sort jobs based on profit in descending order
bool comp(Job a, Job b) {
    return a.profit > b.profit;
}

class Solution {
public:
    vector<int> JobScheduling(Job arr[], int n) {
        // Sort jobs in decreasing order of profit
        sort(arr, arr + n, comp);

        int maxDeadline = 0;
        for (int i = 0; i < n; i++)
            maxDeadline = max(maxDeadline, arr[i].dead);

        vector<int> slot(maxDeadline + 1, -1);  // To track free slots
        vector<int> selectedJobs;  // Store jobs that are selected
        int jobsCount = 0, maxProfit = 0;

        for (int i = 0; i < n; i++) {
            for (int j = arr[i].dead; j > 0; j--) {
                if (slot[j] == -1) {  // If slot is available
                    slot[j] = arr[i].id;
                    selectedJobs.push_back(arr[i].id);
                    jobsCount++;
                    maxProfit += arr[i].profit;
                    break;
                }
            }
        }

        // Print jobs done
        cout << "Jobs done: " << jobsCount << endl;
        cout << "Maximum Profit: " << maxProfit << endl;
        cout << "Jobs Selected: ";
        for (int job : selectedJobs)
            cout << job << " ";
        cout << endl;

        return {jobsCount, maxProfit};
    }
};

// Driver code
int main() {
    int n = 5;  // Number of jobs
    Job arr[] = {{1, 2, 100}, {2, 1, 50}, {3, 2, 10}, {4, 1, 20}, {5, 3, 30}};

    Solution obj;
    obj.JobScheduling(arr, n);

    return 0;
}
