#include <bits/stdc++.h>

using namespace std;
void solve(){
set<int> a;
int n;
cin>>n;

for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if (a.count(x))
         a.insert(-x);
    else
        a.insert(x);
}
cout<<a.size()<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}