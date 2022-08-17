#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
int k=0;
cin>>n;
int t;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<=arr[0]/2;i++){
    if(arr[0]%i==0){
        k++;
        break;
    }
   
}
if(k>0){
    cout<<n<<'\n';
}
else if(k==0){
    for(int i=0;i<n;i++){
       t=0;
        if(arr[i]%arr[0]!=0){
            t++;
            break;
        }
    }
if(t==0){
    cout<<arr[0]*n<<'\n';
}
else
cout<<n<<'\n';


    
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





