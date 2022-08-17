#include <bits/stdc++.h>
using namespace std;
void solve(){
string a;
float i,b,c;
cin>>a>>b;
i=stof(a);
if (i>40){
    c=(40)*b+(i-40)*b*1.5;

}
else
    c=i*b;
    cout<<c;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);   
        solve();  
}