#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define inf (int)1e18
 
void solve() {
    int n,k,s=0;
    cin>>n>>k;
    vector<int> v(n);
    for(auto & i:v) 
    cin>>i,s+=i;
    if(s%2==1 || (n*k)%2==0)cout<<"YES\n";
    else cout<<"NO\n";
}
 
signed main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
 
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}