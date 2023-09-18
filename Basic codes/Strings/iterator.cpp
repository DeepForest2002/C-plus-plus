#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Geeksforgeeks";
    string::iterator str;
    str = s.begin();
    cout << *str;
    str = s.end() - 1;
    cout << *str;
    //String reverse iterator functions
    string::reverse_iterator str1;
    str1 = s.rbegin();
    cout << *str1;
    str1 = s.rend()-1;
    cout << *str1;
    return 0;
}