#include <bits/stdc++.h>
using namespace std;
 
void solve(vector<int>& arr,int ind, vector<int>& ans) {
    for(int i = ind; i<ind+arr.size();i++){
        ans.push_back(arr[i-ind]);
    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
         cin>>n;
         vector<int> arr(n);
         vector<int> two,six,three,other;
         for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%6==0){
                six.push_back(arr[i]);
            }else if(arr[i]%2==0){
                two.push_back(arr[i]);
            }else if(arr[i]%3==0){
                three.push_back(arr[i]);
            }else{
                other.push_back(arr[i]);
            }
         }
         vector<int> ans;
        solve(six,0,ans);
        solve(two,six.size(),ans);
        solve(other,six.size(),ans);
        solve(three,six.size()+two.size()+other.size(),ans);
        for(int i = 0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
 
    return 0;
}