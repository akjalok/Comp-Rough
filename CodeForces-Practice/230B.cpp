#include <bits/stdc++.h>

using namespace std;
void solve(){
long long int n;
int t=0;
cin>>n;
for(long long int i=2;i<n;i++){
    if(n%i==0){
        t++;
        if(t>1){
            break;
        }
    }
}
if(t==1){
    cout<<"YES"<<'\n';
}
else
    cout<<"NO"<<'\n';
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}