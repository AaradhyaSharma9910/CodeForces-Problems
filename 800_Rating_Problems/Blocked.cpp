#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    vector<long long> a(n);
    for(long long &i : a) cin>>i;
    sort(a.rbegin(),a.rend());
    for(long long i = 1; i < n; i++){
        if(a[i] == a[i-1]){
            cout<< -1 << '\n';
            return;
        }
    }
    for(long long i : a) cout<<i<<" "; cout<<'\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) solve();
}