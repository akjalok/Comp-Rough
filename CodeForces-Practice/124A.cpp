#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b==n){
        cout<<b;
    }
    else
    if(a+b>n){
        cout<<n-a;
    }
    else if(a+b<n){
        cout<<b+1;
    }
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--)
    solve();
}