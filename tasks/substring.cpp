#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = "This is:a dog";
    size_t location = str1.find(':');
    if(location!=string::npos){
        cout << location << endl;
        cout << str1.substr(location + 1,1);
    }
    else{
        cout << "Character is not present";
    }
    return 0;
}