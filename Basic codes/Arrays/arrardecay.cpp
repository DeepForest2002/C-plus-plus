#include<iostream>
using namespace std;
void func(int arr[]){
    cout << sizeof(arr);
}
void func1(int (*ptr)[5]){
    cout << sizeof(ptr);
}
void func2(int (&ptr1)[5]){
    cout << sizeof(ptr1);
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sizeof(arr)<<endl;
    func2(arr);
    // func(arr);
    // func1(&arr);
}