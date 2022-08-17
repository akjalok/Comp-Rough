#include <bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(1);
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,5);
    vector<int> v1(5,100);
    vector<int> v2(5);
    vector<int> v3(5,10);
    vector<int> v4(v3);
    vector<int> v5={20,10,15,6,7};
    vector<int>::iterator it =v5.begin();
    // it++;
    // cout<<*(it)<<" ";
    // it=it+2;
    // cout<<*(it)<<" ";
    for(auto it:v5){
        cout<< it<<" ";
    }


}

signed main(){
    explainVector();
}