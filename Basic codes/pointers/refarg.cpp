#include<iostream>
using namespace std;
void passrefarg(int& x,int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a = 45, b = 46;
    cout << a << " " << b << endl;
    passrefarg(a, b);
    cout << a << b;
    return 0;
}