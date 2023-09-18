#include<iostream>
using namespace std;
int main(){
    int a = 45;
    float b = 12.32;
    float c = a + b;
    cout << (int)b << endl;  //explicit type conversion
    cout << c;
    return 0;
}