#include <bits/stdc++.h>
using namespace std;
void solve(){
    int max(int a,int b);
    int a,b,c,d,e,f,g,h,i;
    cin>>a>>b>>c;
    d=a+b+c;
    e=(a+b)*c;
    f=a*(b+c);
    g=a*b*c;
    h=a+b*c;
    i=a*b+c;
    a=max(d,max(e,max(f,max(g,max(h,i)))));
    cout<<a<<'\n';
}





signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
        solve();
    
}
int max(int a,int b){
    if (a>=b)
        return a;
    else 
        return b;
}