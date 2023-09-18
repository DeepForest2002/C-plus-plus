#include<iostream>
using namespace std;
/*void function(int *arr){
    cout << sizeof(arr);
}*/
// Question: How to find the size of an array in a function
// Ans: Pass the array as reference in the function 
void function(int(&arr)[10]){
    cout << sizeof(arr);
}
int main(){
    int arr[10];
    cout << sizeof(arr) << endl;
    function(arr);
    return 0;
}