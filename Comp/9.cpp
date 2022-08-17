#include <bits/stdc++.h>
using namespace std;
void solve(){
int t,k,flag=0;
int arr[50];
int i;
cin>>t>>k;
for(int i=0;i<t;i++){
    cin>>arr[i];
}
for(int i=0;i<t;i++){
    if(arr[i]>=arr[k-1]&&arr[i]>0){
        flag++;
    }
    else
        break;
}
cout<<flag;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);   
        solve();  
}