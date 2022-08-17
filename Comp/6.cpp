#include <bits/stdc++.h>

using namespace std;
void solve(){
long long int a,b,c;
cin>>a>>b>>c;
a=(a+c-1)/c;
b=(b+c-1)/c;
c= a*b;
cout<<c;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
        solve();
    
}