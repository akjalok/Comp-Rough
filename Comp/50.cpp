#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c;
int i=0;
cin>>a>>b>>c;
if(a>=c){
    if(a<=b){
    i++;
    }
else if(a<c){
    if(b>=c){
        i++;
    }
}
if(i>0){
    cout<<"yes"<<'\n';
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