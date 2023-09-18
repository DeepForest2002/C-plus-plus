#include<iostream>
using namespace std;
void subarrays(int *array,int n){
    for (int i = 0; i < n;i++){
        for (int k = i; k <= n - i;k++){
            cout << array[k] << endl;
        }
        cout << endl;
    }
}
int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array) / sizeof(int);
    subarrays(array, n);
    return 0;
}