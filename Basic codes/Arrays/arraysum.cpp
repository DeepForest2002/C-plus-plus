#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size, result = 0;
    cout << "Enter the size of the array (max=100)"<<endl;
    cin >> size;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < size;i++){
        result += arr[i];
    }
    cout << "The sum is:" << result;
    return 0;
}