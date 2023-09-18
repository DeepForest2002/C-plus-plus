#include<iostream>
using namespace std;
extern int g;
int main(){
    int a = 45;
    a = 46;
    const int  b = 85;
    // const int *ptr = &b;
    // cout << *ptr;
    int *ptr = &a;
    cout << *ptr;
    cout << g;
    // cout << a;
}
