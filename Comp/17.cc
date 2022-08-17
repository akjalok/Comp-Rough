#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b;
float c;
cin>>a>>b;
switch (a+b)
{
case 2:
    c=(float) 4/6;
    cout<<c<<'\n';
    break;
case 3:
    c=(float)3/6;
    cout<<c<<'\n';
    break;
case 4:
    c=(float)2/6;
    cout<<c<<'\n';
    break;
case 5:
    c=(float)1/6;
    cout<<c<<'\n';
    break;
default:
    cout<<'0'<<'\n';
    break;


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