#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Geekforgeeks";
    cout << str.length()<<endl;
    // cout << str.substr(12);
    // Find the substring after f
    int position = str.find("f");
    string sub = str.substr(position + 1);
    cout << sub<<endl;
    string sub1 = str.substr(0, position);
    cout << sub1;
    return 0;
}