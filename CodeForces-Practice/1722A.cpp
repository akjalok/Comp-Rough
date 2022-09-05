#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
int t=0;
cin>>n;
char a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}
if(n==5){
char arr[5]={'T','i','m','u','r'};
sort(arr,arr+5);
sort(a,a+n);
for(int i=0;i<5;i++){
    if(a[i]!=arr[i]){
        t++;
    }
}
if(t==0)
cout<<"YES"<<'\n';
else
cout<<"NO"<<'\n';
}
else
    cout<<"NO"<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}




