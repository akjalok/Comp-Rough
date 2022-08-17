#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int i,j,k;
    for(i=1;i<=n;i++){
        k=a[i];
        j=i-1;
        while (j>=0 and a[j]>=k)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }


}