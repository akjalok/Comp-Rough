#include <bits/stdc++.h>

using namespace std;
void solve(){
string a;
string b;
int n;
cin>>a;
n=a.size();
b = to_string(n-2);
if (n>10){
    a=a.replace(1,n-2,b);
}
else
    a=a;

cout<<a<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}