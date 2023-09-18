#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    switch(ch){
        case 'A':
            cout << "Case a";
            break;
        case 'B':
            cout << "Case b";
            break;
        default:
            cout << "none";
            break;
            ;
    }
    return 0;
}