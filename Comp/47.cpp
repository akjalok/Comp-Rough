#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
int g,h;
int x[n],y[n];
for(int i=0;i<n;i++){
    cin>>x[i];
    cin>>y[i];
}

sort(x,x+n);
sort(y,y+n);
if(n>1){
    if(x[0]*x[n-1]<=0){
       g=x[n-1]-x[0];
    }
    else if(x[0]*x[n-1]>0&&(y[n-1]>=(-1)*y[0])){g=x[n-1];}
    else if(x[0]*x[n-1]>0&&(y[n-1]<(-1)*y[0])){g=x[0];}
if(y[0]*y[n-1]<=0){       
    h=y[n-1]-y[0]; 
    }
 
  else if(y[0]*y[n-1]>0&&(y[n-1]>=(-1)*y[0])){h=y[n-1];}
  else if(y[0]*y[n-1]>0&&(y[n-1]<(-1)*y[0])){h=y[0];}
}


else {
    g=x[0];
    h=y[0];
}




if(g<0){
    g=g*(-1);
}
if(h<0){
    h=h*(-1);
}
cout<<2*(g+h)<<'\n';
 
 
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
     while(t--){
        solve();
     }
    
}
