#include <iostream>
using namespace std;
main(){
int a;
int fact(int);
    cout<<"Factorial of which number:";
    cin>>a;
    cout<<"Factorial:"<<fact(a);
return 0;
}
int fact(int a){
if (a<=1)
    return 1;
else
    return a*fact(a-1);
}