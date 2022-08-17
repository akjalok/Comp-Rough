#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    int sum0=0;
    int sum1=0;
    int sum2=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(j==0){
                sum0=sum0+arr[i][j];
            }
            if(j==1){
                sum1=sum1+arr[i][j];
            }
            if(j==2){
                sum2=sum2+arr[i][j];
            }
        }
    }
    if(sum0==0 && sum1==0 && sum2==0){
        cout<<"YES"<<'\n';
    }
    else
        cout<<"NO"<<'\n';
}




signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--){
        solve();
    // }
}