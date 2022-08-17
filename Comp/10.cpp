#include <bits/stdc++.h>
using namespace std;
void solve(){
int b,m,n,a;
int t=0;
cin>>b>>m>>n;
for(int i=0;i<=n;i++){
t=t+(i*b);
}
if(t-m>0){
    a=t-m;
}
else
    a=0;
cout<<a;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);   
        solve();  
}