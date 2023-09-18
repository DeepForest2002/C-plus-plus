#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    int num = 45;
    double d = static_cast<double> (num);
    cout << typeid(num).name();
    cout << typeid(static_cast<double>(num)).name();
    //const type casting
    const int var = 45;
    const int *ptr = &var;
    // int *nonconsptr = const_cast<int *>(ptr);
    // *nonconsptr = 56;
    // cout << *nonconsptr;
    cout << *ptr;

    //Reinterpret cast
    int num2 = 12;
    int *ptr1 = &num2;
    char *charpointer = reinterpret_cast<char *>(ptr1);
    cout << ptr1<<endl;
    cout << reinterpret_cast<void *>(charpointer);
    return 0;
}