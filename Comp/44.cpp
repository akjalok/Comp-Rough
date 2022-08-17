#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c,d;
cin>>a>>b;
c=a;
d=b;
if(a%2==1)
c--;

if(b%2==1)
d--;

cout<<(a*b)-(c*d)<<'\n';
}






signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}