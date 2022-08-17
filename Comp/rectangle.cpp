#include <iostream>
using namespace std;
class Rectangle{
    private:
        int a, b;
    public:
        void in(int length, int breadth){
            a = length;
            b = breadth;
        }
        int area(){
            return a * b;
        }
};
int main(){
    Rectangle r1;
    int d,f;
    cin>>d;
    cin>>f;

    r1.in(d, f);
    cout << "Area of r1: " << r1.area() << '\n';
}
   