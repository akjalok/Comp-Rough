#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   if(n==0){
    cout<<1<<'\n';
   }
   else{
    if(n%4==1){
        cout<<8;
    }
    else if(n%4==2){
        cout<<4;
    }
    else if (n%4==3)
    {
        cout<<2;
    }
    else if (n%4==0)
    {
        cout<<6;
    }
    
    
   }
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--)
    solve();
}