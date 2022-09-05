#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n;
int t=0;
cin>>n;
if(n==1)
    cout<<0<<'\n';
else
    cout<<(n*n)/2<<'\n';

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}