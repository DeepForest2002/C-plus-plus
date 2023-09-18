#include<iostream>
using namespace std;
inline int cube(int x) { return x * x * x; }
int main(){
    cout << "The cube of 3 is" << cube(3);
    return 0;
}