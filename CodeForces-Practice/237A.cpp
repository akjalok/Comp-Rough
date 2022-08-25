#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int t;
    cin>>n;
    map<long long int,long long int> m;
    for(int i=0;i<n;i++){
        int h,min;
        cin>>h>>min;
        t=h*60+min;
        m[t]++;
    }
    long long int ans=1;
    for(auto it:m){
        ans=max(ans,it.second);
    }
    cout<<ans;
}

 


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}