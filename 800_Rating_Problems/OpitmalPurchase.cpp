#include <bits/stdc++.h>
using namespace std;
 
void solve(int t) {
    long long n,a,b;
    cin>>n>>a>>b;
    if(3*a<=b){
        cout<<n*a<<endl;
    }else{
        if(n%3==0){
            cout<<n/3*b<<endl;
        }else{
            cout<<(n/3*b)+min((n%3)*a,b)<<endl;
        }
    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve(t);
    }
 
    return 0;
}