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
    //Printing vector
    for(vector<int>::iterator it =v5.begin();it!=v5.end();it++)
     cout<<*(it)<<" ";
    cout<<'\n';
    for(auto it=v5.begin();it!=v5.end();it++){
       cout<<*(it)<<" ";
    }
    cout<<'\n';
    for(auto it:v5){
        cout<< it<<" ";
    }
    cout<<'\n';
    //Delete function/Erase function
    v5.erase(v5.begin()+1);
    for(auto it:v5){
    cout<< it<<" ";
    }
     cout<<'\n';
    v5.erase(v5.begin(),v5.begin()+3);
    for(auto it:v5){
    cout<<it<<" ";
     }
    //Insert Function
    vector<int> vt(2,100);//100,100
    vt.insert(vt.begin(),300);//300,100,100
    vt.insert(vt.begin()+1,2,10);//300,10,10,100,100
    cout<<'\n';
    vector<int> copy(2,50);//50,50;
    vt.insert(vt.begin(),copy.begin(),copy.end());//50,50,300,10,10,100,100
    cout<<vt.size();
    cout<<'\n';
    vt.pop_back();
    for(auto it=vt.begin();it!=vt.end();it++){
        cout<<*(it)<<" ";
    }

    vt1={1,2};
    vt2={3,5}
    vt1.swap(vt2);
    //vt1-->{3,5},vt2-->{1,2}
    vt1.clear();//erases the entire vector
    
}

signed main(){
    explainVector();
}