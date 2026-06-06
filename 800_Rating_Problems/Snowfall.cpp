#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> s6, s2, s1, s3;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            if (x % 6 == 0)
                s6.push_back(x);
            else if (x % 2 == 0)
                s2.push_back(x);
            else if (x % 3 == 0)
                s3.push_back(x);
            else
                s1.push_back(x);
        }
 
        vector<int> ans;
 
        for (int x : s6) ans.push_back(x);
        for (int x : s2) ans.push_back(x);
        for (int x : s1) ans.push_back(x);
        for (int x : s3) ans.push_back(x);
 
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
 
    return 0;
}
