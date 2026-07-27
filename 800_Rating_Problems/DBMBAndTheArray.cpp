#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n,s,x; cin>>n>>s>>x;
        vector<int> v(n);
        int sum = 0;
        for(auto &vv : v) {
            cin>>vv;
            sum += vv;
        }
        if(sum == s || (sum<s && (sum-s)%x==0)) cout<<"YES\n";
        else cout<<"NO\n";
        solve();
    }

    return 0;
}