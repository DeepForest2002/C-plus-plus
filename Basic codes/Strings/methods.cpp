#include <iostream>
#include<string>
using namespace std;
int main(){
    string s("Hello");
    string s1("World");
    string s2 = s + s1;
    cout << s2<<endl;
    //append method
    cout<<s.append(s1);
    s1[0] = 'p';
    cout << s1;
    return 0;
}