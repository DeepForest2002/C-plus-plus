#include<iostream>
using namespace std;
int main(){
    int arr[] = {12, 10, 2, 5, 8, 1};
    int n = sizeof(arr) / sizeof(int);
    int minelement = arr[0];
    for (int i = 0; i < n;i++){
        if(arr[i]<minelement){
            minelement = arr[i];
        }
    }
    cout << minelement;
    return 0;
}