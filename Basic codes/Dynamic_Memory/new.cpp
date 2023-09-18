#include<iostream>
using namespace std;
int main(){
    int *p = new (nothrow) int;
    if(!p){
        cout << "Memory allocation is not successfull";
    }
    else{
     *p = 45;
        cout << "The value of p is:" << *p<<endl;
    }
    char *charptr = new char('B');
    cout << *charptr;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int *arrptr = new (nothrow) int[n];
    if(!arrptr){
        cout << "Memory is't sufficient";
    }
    else{
        for (int i = 0; i < n;i++){
            arrptr[i] = i + 1;
        }
        for (int i = 0; i < n;i++){
            cout << arrptr[i] << endl;
        }
    }
    delete p;
    delete charptr;
    delete[] arrptr;
    return 0;
}