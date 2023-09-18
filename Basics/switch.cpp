#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 15, 10, 20};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n;i++){ 
        switch(arr[i]){
           case 1 ... 10:
               cout << arr[i] << "is in range of 1-10\n";
               break;
            case 11 ... 20:
               cout << arr[i] << "is in range of 11-20\n";
               break;
            default:
               cout << "not in range";
               break;
        }
    }
        return 0;
}