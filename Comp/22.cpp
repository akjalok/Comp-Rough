#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c,n=0,d;
cin>>a>>b;
c=a-b;
d=c;
while(d>0){
    d=d/10;
    n++;
}
if(c%10==0){
    c=c+1;
}
else
    c=c-1;

cout<<c<<'\n';
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    
        solve();
        
    
    
}