#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,c;
    cin>>n>>c;
    vector<long long> a(n),b(n);

    for(long long i = 0; i < n; i++) cin>>a[i];
    for(long long i = 0; i < n; i++) cin>>b[i];

    long long ans = 0;
    bool good = true;
    for(long long i = 0; i < n; i++){
        if(a[i]>=b[i]){
            ans +=(a[i]-b[i]);
        }
        else{
            good = false;
            break;
        }
    }
    if(good){
        cout<<ans<<endl;
        return;
    }
   sort(a.begin(), a.end());
sort(b.begin(), b.end());
    ans = c;
    for(long long i = 0; i < n; i++){
if(a[i]>=b[i]){
    ans+=(a[i]-b[i]);
} else{
    cout<<"-1"<<endl;
    return;
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