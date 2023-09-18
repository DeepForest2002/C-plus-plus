#include<iostream>
using namespace std;
int main(){
    //character for option choosing
    char choice;
    int num1, num2;
    while(1){
        cout << "Choose an option(+,-,*,/)/n and Enter x for exit" << endl;
        cin >> choice;
        if(choice=='x'){
            exit(0);
        }
        cout << "Enter number 1" << endl;
        cin >> num1;
        cout << "Enter number 2" << endl;
        cin >> num2;
        switch(choice){
            case '+':
            cout << "Answer is" << num1 + num2<<endl;
            break;
            case '-':
            cout << "Answer is:" << num1 - num2<<endl;
            break;
            case '*':
            cout << "Answer is:" << num1 * num2<<endl;
            break;
            case '/':
            cout << "Answer is:" << num1 / num2<<endl;
            break;
            default:
            cout << "not done";
            break;
        }
    }
    return 0;
}