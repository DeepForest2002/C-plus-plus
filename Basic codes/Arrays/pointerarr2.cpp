#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // this points to only the first element of the array
    int(*ptr1)[5] = &arr; //This points to the whole array
    cout << ptr << " " << ptr1 << endl;
    ptr++;
    ptr1++;
    cout << ptr << " " << ptr1 << endl;
    cout << sizeof(*ptr1);
    return 0;
}