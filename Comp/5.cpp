#include <bits/stdc++.h>

using namespace std;
void solve(){
int a;
cin>>a;
if (a<5&&a>0){
    cout<<1;
}
else{
a=(a+4)/5;
cout<<a;
}

}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
        solve();
    
}