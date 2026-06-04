#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n; 
        cin>>n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        vector<long long> b(n);
        for(int i = 0; i < n; i++){
            cin>>b[i];
        }
        long long x = 0;
        long long y = 0;
        for(int i = 0; i < n; i++){
            x+=max(a[i],b[i]);
            y = max(y,min(a[i],b[i]));
        }
        cout<<x+y<<endl;
        
    }
 
    return 0;
}