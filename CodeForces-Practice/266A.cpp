#include <bits/stdc++.h>
using namespace std;
void solve(){
 int n,m,a,b;
 int p;
 cin>>n>>m>>a>>b;
 if(m<n){
 if(b/m>=a){
    p=a*n;
 }
 else if(n%m!=0 && b<=a){
    p=((n/m)+1)*b;
 }
 else if(n%m==0 && b<=a){
    p=((n/m))*b;
 }
 else
  p=(n/m)*b+(n%m)*a;
 }
 else{
    if(a*n>=b){
        p=b;
    }
    else
        p=a;
 }
 cout<<p;
}   




signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--)
    solve();
}