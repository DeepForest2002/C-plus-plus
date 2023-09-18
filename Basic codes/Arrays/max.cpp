#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 4, 56, 99, 89, 12};
    int n = sizeof(arr) / sizeof(int);
    int maxelement = arr[0];
    for(int i = 0; i <n ; i++)
    {
        if(arr[i]>maxelement){
            maxelement = arr[i];
        }
    }
    cout << maxelement;
    return 0;
}