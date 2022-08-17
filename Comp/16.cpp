#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b;
int n;
cin>>n>>a;
int c[n];
for(int i=0;i<n;i++){
    cin>>c[i];
    if(a-c[i]>=0){
        cout<<1;
        a=a-c[i];
    }
    else
        cout<<0;
}

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int t;cin>>t;
    while(t--){  
        solve();
        cout<<'\n';
    }  
}