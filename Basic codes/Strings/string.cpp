#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s = "My name is Ram";
    stringstream obj(s);
    //This is for reading the string words individually
    string temp;
    // >>= extraction operator that helps us to read the string
    while(obj>>temp){
        cout << temp << endl;
    }
    //Taking string as user input
    string str;
    cout << "Enter your string:" << endl;
    // cin >> str;
    getline(cin, str);
    cout << str;
    return 0;
}