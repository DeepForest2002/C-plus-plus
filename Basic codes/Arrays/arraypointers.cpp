#include<iostream>
using namespace std;
int  main(){
    int arr[3] = {10, 20, 3};
    int *ptr;
    ptr = arr;
    cout << ptr[1];
    for (int i = 0; i < 3;i++){
        cout << *(arr+i) << endl;
        // *ptr++;
    }
        return 0;
}