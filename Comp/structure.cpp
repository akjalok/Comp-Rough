#include <bits/stdc++.h>
using namespace std;
struct stu{
    char student[20];
    int roll_number;
    char address[20];
};
int main(){
    struct stu stu1[20];
    int n;
    cout<<"Number of students:";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Enter the student name:";
    cin>>stu1[i].student;
    cout<<"Enter the student roll_no.:";
    cin>>stu1[i].roll_number;
    cout<<"Enter the student address:";
    cin>>stu1[i].address;
    }
    for(int i=0;i<n;i++){
    cout<<"NAME:"<<stu1[i].student<<'\n'<<"ROLL NO:"<<stu1[i].roll_number<<'\n'<<"ADDRESS:"<<stu1[i].address<<'\n\n';
    }
}