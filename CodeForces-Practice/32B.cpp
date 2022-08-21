#include <bits/stdc++.h>
using namespace std;
void solve(){
char arr[201];
vector<int> a;
cin>>arr;
for(int i=0;i<strlen(arr);i++){
    if(arr[i]=='.')
       a.push_back(0);
    else if(arr[i]=='-' && arr[i+1]=='.'){
        a.push_back(1);
        i++;
    }
    else if(arr[i]=='-' && arr[i+1]=='-'){
        a.push_back(2);
        i++;
    }
}

for(auto it:a){
    cout<<it;
}
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;cin>>t;
    // while(t--)
    solve();
}