#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void solve(){
long long int a,sum=0,b,c;
cin>>a;
c=a*(a+1)/2;
a--;
while(a--){
cin>>b;
sum=sum+b;
}
c=c-sum;
cout<<c;
}



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
   
        solve();
        
    }