#include<iostream>
#include<string>
using namespace std;
void substring(string str,int n){
    //Two for loops 
    // 1>first for loop is for position and 
    // 2>second for loop is for lenght
    for (int i = 0; i < n;i++){
        for (int length = 1; length <= n-i;length++){
            cout << str.substr(i, length)<<endl;
        }
    }
}
int main(){
    string str = "abc";
    int n = str.length();
    substring(str, n);
    return 0;
}