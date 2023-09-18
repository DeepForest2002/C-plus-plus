#include<iostream>
using namespace std;
int main(){
    int var = 12;
    int *ptr = &var;
    cout << ptr<<endl;
    cout << *ptr;
    *ptr = 45;
    cout << var;
    return 0;
}