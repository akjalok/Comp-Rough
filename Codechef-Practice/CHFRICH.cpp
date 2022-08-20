#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n,k,t;
cin>>n>>k>>t;
n=k-n;
if(n%t!=0)
    cout<<(n/t)+1<<'\n';
else
    cout<<(n/t)<<'\n';

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}