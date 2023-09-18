#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Nuntia";
    cout << str.length();
    cout << str.capacity()<<endl;
    cout << "Before resizing the string is" << str << endl;
    str.resize(4);
    cout << "After resizing the string is" << str << endl;
    str.resize(20);
    cout << "Before shrink to fit the capacity is" << str.capacity()<<endl;
    str.shrink_to_fit();
    cout << "After shrink to fit the capacity is" << str.capacity();
    return 0;
}