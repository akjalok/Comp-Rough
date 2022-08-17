#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
int x=0;
int a[]={0,5,5,4,5,6};
for(int i=0;i<sizeof(a)/sizeof(int);i++){
    if(a[i]==5){
    x++;
    }
}
cout<<x;
}


