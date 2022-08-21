#include <bits/stdc++.h>
using namespace std;
void solve(){
int n,b;
cin>>n>>b;
char a[n];
cin>>a;
for(int i=0;i<b;i++){
    for(int i=0;i<n;i++)
    if(a[i]=='B' && a[i+1]=='G'){
        a[i]='G';
        a[i+1]='B';
        i++;
    }
}
cout<<a;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--)
    solve();
}