#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    int t=0;
    cin>>n>>k;
    int arr[n],a[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<k;i++){
        if(arr[i]>k){
            for(int j=k;j<n;j++){
                if(arr[j]<=k){
                    swap(arr[i],arr[j]);
                    t++;
                    break;
                }
            }
        }
    }
   cout<<t<<'\n';

}





signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}