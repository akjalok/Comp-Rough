#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    int t=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
         t++;
    }
    if(t==1){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                k=i+1;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2==1){
                k=i+1;
                break;
            }
        }
    }
    cout<<k;
}   




signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--)
    solve();
}