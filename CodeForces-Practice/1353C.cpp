#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,m=0;
    cin>>n;
    for(long long int i=0;i<=n/2;i++){
        m= (i*i*8)+m;
    }
    cout<<m<<'\n';

}   




signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}