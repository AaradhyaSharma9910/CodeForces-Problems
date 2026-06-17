#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
    long long n;
        string s;
 
        cin >> n;
        cin >> s;
long long cnt1 = 0;
long long cnt2 = 0;
for(int i = 0;i<n;i++){
 
     
            if (s[i]=='('){ 
            cnt1++;}
            else {
            cnt2++;}
        }
 
if(cnt1==cnt2){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
    
}
    }
 
    return 0;
}