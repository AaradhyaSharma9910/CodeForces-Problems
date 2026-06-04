#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }map<int,int> freq;
    for(int x:arr){
        freq[x]++;
    }
    long long answer = n;
    long long leftCount = 0;
    for(auto it:freq){
        long long count = it.second;
        long long rightCount = n-leftCount-count;
        long long operations = max(leftCount,rightCount);
        answer = min(answer,operations);
        leftCount+=count;
 
    }
    cout<<answer<<'\n';
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