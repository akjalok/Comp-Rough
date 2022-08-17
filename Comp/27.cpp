#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void solve(){
int a,b,c,d=0,temp;
cin>>a;
int x[a];
for(int i=0;i<a;i++){
    cin>>x[i];
    if (x[i]<0)
        x[i] = -1*x[i];

}
for (int i = 0; i <a; i+=2) {
    for (int i = 0; i < a - i; i+=2) {
      if (x[i] > x[i + 2]) {
         temp = x[i];
        x[i] = x[i + 2];
        x[i + 2] = temp;
      }
    }
  }
  for (int i = 1; i <a; i+=2) {
    for (int i = 1; i < a - i; i+=2) {
      if (x[i] > x[i + 2]) {
         temp = x[i];
        x[i] = x[i + 2];
        x[i + 2] = temp;
      }
    }
  }
  temp = x[0];
  x[0] = x[a-2];
  x[a-2] = temp;
   for(int i=0;i<a;i++){
       int r;
       r=x[i]*pow(-1,i);
       d = d + r;
   }
   cout<<d<<'\n';
  }



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int t;cin>>t;
    while(t--){  
        solve();
    }  
}