#include <bits/stdc++.h>
using namespace std;
void solve(){
 int n;
 cin>>n;
int x[n],y[n];
int sx=0,sy=0,sum=0;
 for(int i=0;i<n;i++){
 cin>>x[i];
 cin>>y[i];
 }
 sort(x,x+n);
 sort(y,y+n);
 if(n>1){
 if(x[0]<0&&x[n-1]>=0){
    sx=(x[0]*-2)+x[n-1]*2;
 }
 else if(x[0]>=0&&x[n-1]>=0){
    sx=x[n-1]*2;
 }
 if(y[0]<0&&y[n-1]>=0){
    sy=(y[0]*-2)+y[n-1]*2;
 }
  else if(y[0]>=0&&y[n-1]>=0){
    sy=y[n-1]*2;
 }
  if(x[0]<0&&x[n-1]<0){
    sx=(x[0]*-2);
 }
 if(y[0]<0&&y[n-1]<0){
    sy=(y[0]*-2);
 }
 }
 if(n==1){
   if(x[0]<0){
    sx=(x[0]*-2);
 }
 else if(x[0]>=0){
    sx=x[n-1]*2;
 }
 if(y[0]<0){
    sy=(y[0]*-2);
 }
  else if(y[0]>=0){
    sy=y[n-1]*2;
 }
 }
 sum=sx+sy;
 cout<<sum<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}