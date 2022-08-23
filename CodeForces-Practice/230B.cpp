#include <bits/stdc++.h>

using namespace std;
void solve(){
int n;
cin>>n;
vector <int> p;
vector<bool> isprime(1000000000001,true);
for(int i=2;i*i<=1000000000001;i++){
    if(isprime[i]){
        for(int j=i*2;j<=1000000000001;j+=j+i){
            isprime[j]=false;
        }
    }
}
for(int i=2;i<1000000000001;i++){
    if(isprime[i])
    p.push_back(i);
}
if(find(p.begin(),p.end(),pow(n,.5))!=p.end())
    cout<<"YES"<<'\n';
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