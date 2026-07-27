#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin>>n;

    vector<long long> v(n);
    for(ll i = 0; i < n; i++){
        cin>>v[i];
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        ans = max(ans,v[i]);
    }
    cout<<ans<<"\n";
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