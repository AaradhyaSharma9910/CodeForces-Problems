#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    long long n,k;
    cin>>n>>k;
    long long ans = 0;
    long long pow = 0;
    while(true){
        long long sum = (1LL<<pow)*k;
        if(sum<=n){
            ans+=k;
            n-=sum;
            pow++;
        }
        else{
            ans+=n/(1LL<<pow);
            break;
        }
    }
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