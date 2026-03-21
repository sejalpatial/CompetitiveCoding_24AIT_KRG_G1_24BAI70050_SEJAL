#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long int func(vector<int> arr, int hrs, int n) {
        long int time = 0;
        for (int i = 0; i < n; i++) {
            double t = (double)arr[i] / hrs;
            time += ceil(t);
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            maxi = max(maxi, piles[i]);
        }

        int low = 1, high = maxi;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long time = func(piles, mid, n);

            if (time <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main() {
    Solution obj;

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    int result = obj.minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl;

    return 0;
}