#include<iostream>
using namespace std;
int main(){
    int *ptr = nullptr;
    if(ptr==nullptr){
        cout << "0";
    }
    else{
        cout << "1";
    }
    nullptr_t np1;
    return 0;
}
