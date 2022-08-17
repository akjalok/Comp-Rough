#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c,d;
cin>>a>>b>>c>>d;
if(c>d){
    cout<<((a-b)*d)+(b*c)<<'\n';
}
else
    cout<<a*c<<'\n';
}





signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}