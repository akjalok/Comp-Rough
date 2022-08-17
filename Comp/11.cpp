#include <bits/stdc++.h>
using namespace std;
void solve(){
int n,x=0;
string a;
cin>>n;
while(n--){
cin>>a;
if (a[1]=='+')
   x= x+1;
else
    x=x-1;
}
cout<<x;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);   
        solve();  
}