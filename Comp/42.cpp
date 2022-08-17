#include <bits/stdc++.h>
using namespace std;
void solve(){
 int a,b,c;
 cin>>a>>b>>c;
 if(a%(b*c)==0){
    cout<<a/(b*c)<<'\n';
 }
 else
    cout<<(a/(b*c))+1<<'\n';
}





signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}