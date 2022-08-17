#include <bits/stdc++.h>

using namespace std;
void solve(){
int n,t;
cin>>t;
n=0;
while(t--){
int a,b,c;
cin>>a>>b>>c;
a=a+b+c;
if (a>1){
    n++;
}
}
cout<<n;

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    {
        solve();
    }
}