#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
int t=0;
cin>>n;
char arr[n];
char a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(a[i]=='R'){
        if(a[i]!=arr[i]){
            t++;
            break;
        }
    }
    if(a[i]=='G'||a[i]=='B'){
        if(arr[i]!='B'&&arr[i]!='G'){
            t++;
            break;
        }
    }
}
if(t!=0)
cout<<"NO"<<'\n';
else
cout<<"YES"<<'\n';
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}
