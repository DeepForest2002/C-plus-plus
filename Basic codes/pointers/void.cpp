#include<iostream>
using namespace std;
int main(){
    int var = 45;
    void *ptr;
    ptr = &var;
    cout << *((int*)ptr);
}