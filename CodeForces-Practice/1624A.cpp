#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
cout<<arr[n-1]-arr[0]<<'\n';

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}