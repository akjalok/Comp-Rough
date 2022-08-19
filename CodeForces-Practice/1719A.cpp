#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long int n,k;
  cin>>n>>k;
  if(n%2==0&&k%2==0){
    cout<<"Tonya"<<"\n";
  }
  else if(n%2==1&&k%2==1)
  cout<<"Tonya"<<"\n";
    else
    cout<<"Burenka"<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}