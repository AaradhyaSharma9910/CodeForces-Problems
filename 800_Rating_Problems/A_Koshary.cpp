#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long x,y;
        cin>>x>>y;
        long long cal = max(x,y);
        long long gg = min(x,y);
        if(cal%2==0 && gg%2==0){
            cout<<"YES"<<endl;
        }else if(cal%2==0 && gg%2 == 1 || cal%2 == 1 && gg%2 == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        
        }
        solve();
    }
 
    return 0;
}