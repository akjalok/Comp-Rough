#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c;
cin>>a>>b>>c;
if(a>=c){
    if(a<=b){
    cout<<"Yes"<<'\n';
    }
else if(a<c){
    if(b>=c){
        cout<<"Yes"<<'\n';
    }
}
else
    cout<<"No"<<'\n';
}

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     int t;cin>>t;
    while(t--){
        solve();
     }
}