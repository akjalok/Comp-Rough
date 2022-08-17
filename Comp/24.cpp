#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c;
cin>>a>>b>>c;
b=b-a;
a=b/c;
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