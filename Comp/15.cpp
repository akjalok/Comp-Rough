#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int a;
    int b,i=0;
    cin>>a;
    while(a>0){
        b = a%10;
            if(b==4||b==7){
                i++;
        }
        a=a/10;
    }
    if(i==4||i==7){
        cout<<"YES"<<'\n';}
    else
        cout<<"NO"<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    
        solve();
    }  
