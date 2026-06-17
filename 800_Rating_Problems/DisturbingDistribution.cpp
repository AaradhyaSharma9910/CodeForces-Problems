#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
    if(arr[i]!=1){
        ans+=arr[i];
    }
    }
    if(arr[n-1]==1){
        ans++;
    }
    cout<<ans<<'\n';
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