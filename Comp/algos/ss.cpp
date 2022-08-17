#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i, j, k;
    for(i = 0; i < n - 1; i++){
        j = i;
        for(k = i + 1; k < n; k++)
        {
            if(a[k] < a[j])
            {
                j = k;
            }
        }
        int t;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }


}