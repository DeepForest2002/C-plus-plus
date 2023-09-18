#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    stringstream ss(str);
    //For reading the string
    string temp;
    int count = 0;
    if(ss.fail()){
        cerr << "Error occurd";
        return 1;
    }
    while(ss>>temp){
        cout << temp<<endl;
        count++;
    }
    cout << count;
}