#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;cin>>n;
    bool ans=false;
    while(n--){
        int x; cin>>x;
        if(x==100)ans=true;
    }cout<<(ans?"Yes":"No")<<"\n";
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