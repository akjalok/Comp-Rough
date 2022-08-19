#include <bits/stdc++.h>
using namespace std;
void solve(){
   long long int n,t,k=0;
   cin>>n>>t;
  

if(t<10){
      for(int i=0;i<n;i++)
        cout<<t;
}
else if(n>1){
   for(int i=0;i<n-1;i++)
        cout<<1;
        cout<<0;
}

else if(n==1)
    cout<<-1;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--)
    solve();
}