#include<iostream>
using namespace std;
void func(int x, int y){
    x += y;
    cout << x << y<<endl;
}
int main(){
    int a = 10, b = 12;
    func(a,b);
    cout << a << b;
    return 0;
}