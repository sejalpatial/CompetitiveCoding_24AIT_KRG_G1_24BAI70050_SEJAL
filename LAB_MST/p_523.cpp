#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1;

        int prefixSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            int rem = prefixSum % k;

            if (mp.find(rem) != mp.end()) {
                if (i - mp[rem] > 1)
                    return true;
            } else {
                mp[rem] = i;
            }
        }
        return false;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {23, 2, 4, 6, 7};
    int k = 6;

    bool result = obj.checkSubarraySum(nums, k);

    if (result)
        cout << "Subarray exists with sum multiple of k" << endl;
    else
        cout << "No such subarray exists" << endl;

    return 0;
}