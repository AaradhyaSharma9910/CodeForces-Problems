#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, c, k;
        cin >> n >> c >> k;
 
        vector<int> a(n);
        for (auto &x : a) cin >> x;
 
        sort(a.begin(), a.end());
 
        for (int i = 0; i < n; i++) {
            if (a[i] > c) break;
 
            int add = min(k, c - a[i]);
            a[i] += add;
            k -= add;
 
            c += a[i];
        }
 
        cout << c << '\n';
    }
}