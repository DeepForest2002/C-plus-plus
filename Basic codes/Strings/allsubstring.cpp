#include<iostream>
#include<string>
using namespace std;
void substring(string str,int n){
    for (int i = 0; i < n;i++){
        for (int len = 1; len <= n - i;len++){
            cout << str.substr(i, len)<<endl;
        }
        cout << endl;
    }
}
int main(){
    string str = "abcd";
    substring(str, str.length());
    return 0;
}