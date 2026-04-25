#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    if(n == 2) {
        cout << -1;
        return 0;
    }

    vector<int> nums;

    for(int i = 1; i <= n*n; i += 2) nums.push_back(i);
    for(int i = 2; i <= n*n; i += 2) nums.push_back(i);

    int idx = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << nums[idx++] << " ";
        }
        cout << "\n";
    }
}