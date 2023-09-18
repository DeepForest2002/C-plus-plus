#include<iostream>
using namespace std;
int main(){
    char choice;
    int numofdigits,nums,i;
    while(1){
        cout << "Enter your choice (+,-,*)\n Enter x for exit\n";
        cin >> choice;
        if(choice=='x'){
            exit(0);
        }
        cout << "Enter the number of digits you want to calculate";
        cin >> numofdigits;
    }
    return 0;
}