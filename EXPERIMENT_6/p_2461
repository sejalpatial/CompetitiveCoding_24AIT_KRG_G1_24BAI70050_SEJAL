#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int i = 0;
        long long sum = 0;
        long long maxi = 0;

        for (int j = 0; j < nums.size(); j++) {
            freq[nums[j]]++;
            sum += nums[j];

            // Remove duplicates
            while (freq[nums[j]] > 1) {
                freq[nums[i]]--;
                sum -= nums[i];
                i++;
            }

            // Check window size k
            if (j - i + 1 == k) {
                maxi = max(maxi, sum);

                // Slide window
                freq[nums[i]]--;
                sum -= nums[i];
                i++;
            }
        }
        return maxi;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;
    long long result = obj.maximumSubarraySum(nums, k);
    cout << "Maximum subarray sum of size " << k 
         << " with unique elements: " << result << endl;

    return 0;
}