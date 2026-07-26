#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b;
    cin>>a>>b;
int size = 1;
int layer = 0;
int tempa = a;
int tempb = b;
bool white = true;
while(true){
    if(white){
        if(tempa>=size){
            tempa-=size;
        }
        else{
            break;
        }
    }
    else{
        if(tempb>=size)
        tempb -=size;
        else
        break;
    }
    white = !white;
    layer++;
    size *=2;
}
int ans = layer;
layer = 0;
size = 1;
tempa = a;
tempb = b;
white = false;
while(true){
    if(white){
        if(tempa >=size){
            tempa -= size;
        }
        else {
            break;
        }
    }
    else{
if(tempb>=size)
tempb -= size;
else
break;
    }
    white = !white;
    layer++;
    size *=2;
}
ans = max(ans,layer);
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