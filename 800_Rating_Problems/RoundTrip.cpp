#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long r,x,d,n;
    cin>>r>>x>>d>>n;
    string s;
    cin>>s;
    long sol = 0;
 for(auto a : s) if(a == '1'){
    r -= d;
    sol++;
 } else if (r<x) sol++;
 cout<<sol<<'\n';
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