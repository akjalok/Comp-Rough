#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;
    while(a>b){
        a++;
        b++;
        b++;
        
    }
    if(a==b){
            cout<<"YES"<<'\n';
        }
        if(a<b){
            cout<<"NO"<<'\n';
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