#include <bits/stdc++.h>
using namespace std;
void solve(){
int n,b,c=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        b=arr[i+1];
    }
    else
        b=arr[i];
    c=c+b;
}
cout<<c<<'\n';


}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int t;cin>>t;
    while(t--){  
        solve();
        
    
    }  
}