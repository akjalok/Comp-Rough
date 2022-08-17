#include <bits/stdc++.h>
using namespace std;
void solve(){
int x,n,temp;
int space[50000];
int rating[50000];
cin>>n>>x;
for(int i=0;i<n;i++){
    cin>>space[i]>>rating[i];
    
}

for(int i = 0; i<n; i++) {
   for(int j = i+1; j<n; j++)
   {
      if(rating[j] < rating[i]) {
         temp = rating[i];
         rating[i] = rating[j];
         rating[j] = temp;
      }
   }
}
int i = n-1;
while(x<space[i])
{
    i--;
}

cout<<rating[i]<<'\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int t;cin>>t;
    while(t--){  
        solve();
    }  
}