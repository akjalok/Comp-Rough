#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b=0;
cin>>a;
while(a>4){
    while(a/5>0){
        a=a/5;
        b=b+a;
    }
    a--;
}
cout<<b<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int t;cin>>t;
    while(t--){  
        solve();
    }  
}