#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void solve(){
int a,b,c,d;
cin>>a>>b;
int e[a];
int i=0;
for(;i<a;i++){
cin>>e[i];

}
i=0;
for(;i<a;i++){
for(int j = i+1; j<a; j++)
   {
      if(e[j] < e[i]) {
         c = e[i];
         e[i] = e[j];
         e[j] = c;
      }
   }
}
for(;i<a;i++){

    
    b=b-e[i];
    if (b<0){
        break;
    }

}
if (i==a){
    cout<<a<<'\n';
}
else{
if((e[i])%2!=0){
    c=(e[i]/2)+1;
}
else
    c=e[i]/2;
if(b>c)
    i++;

cout<<i<<'\n';
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