#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c;
cin>>a>>b;
//c<a and d<a;
//c+d = b;
if(a>=b){
    cout<<b<<'\n';
}
else{
    if ((2*a-b)<0){
        c=-1*(2*a-b);
    }
    else
        c=(2*a-b);
        cout<<c<<'\n';
}   
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int t;cin>>t;
    while(t--){  
        solve();
        
    
    }  
}