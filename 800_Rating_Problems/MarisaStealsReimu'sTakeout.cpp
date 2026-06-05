#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,z=0,o=0,t=0,ans=0;
    cin>>n;
    while(n--){
        int x; cin>>x;
        z+=x==0;
        o+=x==1;
        t+=x==2;
    }
    ans +=z;
    int k = min(o,t);
    o-=k,t-=k;
    ans+=k;
    ans+=o/3;
    ans+=t/3;
    cout<<ans<<endl;
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