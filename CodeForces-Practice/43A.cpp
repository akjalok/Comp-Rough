#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
int k=0,t=1;
cin>>n;
string arr[n];
string a;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(i!=0&&arr[i]==arr[0]){
            t++;
    }
    else if(i!=0){
        a=arr[i];
        k++;
    }
}
if(t>k){
    cout<<arr[0];
}
else
    cout<<a;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--)
    solve();
}