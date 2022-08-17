#include <bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c;
string d;
cin>>a;
if(a>0){
switch(a%8){
   
    case 1 :
        a=a+3;
        d="LB";
        cout<<a<<d;
        break;
     case 2 :
        a=a+3;
        d="MB";
        cout<<a<<d;
        break;
     case 3 :
        a=a+3;
        d="UB";
        cout<<a<<d;
        break;
     case 4 :
        a=a-3;
        d="LB";
        cout<<a<<d;
        break;
     case 5:
        a=a-3;
        d="MB";
        cout<<a<<d;
        break;
     case 6 :
        a=a-3;
        d="UB";
        cout<<a<<d;
        break;
     case 7 :
        a=a+1;
        d="SU";
        cout<<a<<d;
        break;
     case 0:
        a=a-1;
        d="SB";
        cout<<a<<d;
        break;

}
}



}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int t;cin>>t;
    while(t--){  
        solve();
        cout<<'\n';
    
    }  
}