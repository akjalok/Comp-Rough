#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,i=0;
cin>>a;
while(a>0){
    b=a%10;
    if(b==4){
       i=i+1; 
    }
    a=a/10;
}
cout<<i<<'\n';


}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int t;cin>>t;
    while(t--){  
        solve();
    }  
}