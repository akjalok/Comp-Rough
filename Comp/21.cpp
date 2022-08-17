#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c,d,e,f;
cin>>a>>b>>c>>d>>e>>f;
if(((c==a) and (d==b)) or ((c==b) and (d==a))){
    cout<<1<<'\n';
}
else if(((a==e) and (b==f)) or ((a==f) and (b==e))){
    cout<<2<<'\n';
}
else
    cout<<0<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int t;cin>>t;
    while(t--){  
        solve();
        
    
    }  
}