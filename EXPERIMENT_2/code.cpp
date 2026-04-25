#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);

    int ones = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) ones++;
        a[i] = (a[i] == 0 ? 1 : -1);
    }

    int max_sum = 0, curr = 0;
    for(int i = 0; i < n; i++) {
        curr = max(a[i], curr + a[i]);
        max_sum = max(max_sum, curr);
    }

    cout << ones + max_sum;
}