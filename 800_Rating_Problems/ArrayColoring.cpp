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
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i = 0; i < n; i ++) cin>>v[i];

        bool check = true;
        for(long long i = 1; i < n; i++) if(v[i] % 2 == v[i-1]%2) check = false;
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        solve();
    }

    return 0;
}