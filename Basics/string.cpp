//Program on strings to get the full name
#include<iostream>
#include<string>
int g = 78;
using namespace std;
int main(){
    string fullname;
    cout << "Type your full name:";
    getline(cin, fullname); //This will read the texts in a line
    cout << "The name is:" << fullname;
    return 0;
}