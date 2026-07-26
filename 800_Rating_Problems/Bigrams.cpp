#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);

    for(auto &x : v) cin>>x;

    sort(v.rbegin(), v.rend());
    bool ok = 0;
    if(v.front() >= 3){
        ok = 1;
    }
    if(n > 1 && v.front() >= 2 && v[1] >= 2){
        ok = 1;
    }
    cout<<(ok ? "YES" : "NO");
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}