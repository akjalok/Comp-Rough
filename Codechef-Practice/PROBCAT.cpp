#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n<100 &&n>=1)
        cout<<"Easy"<<'\n';
    else if(n>=100 && n<200)
        cout<<"Medium"<<'\n';
    else if(n>=200 && n<=300)
        cout<<"Hard"<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}