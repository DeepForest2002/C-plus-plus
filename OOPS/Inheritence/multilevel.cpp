#include<iostream>
using namespace std;
class base_class{
    public:
    int first_variable;
    void get_A(){
        cout << "Enter A: " << endl;
        cin >> first_variable;
    }
    void print(){
        cout << first_variable<<endl;
    }
};
class intermediate:public base_class{
    public:
        int second_variable;
    void get_B(){
        cout << "Enter B: " << endl;
        cin >> second_variable;
    }
    void print1(){
        print();
        cout << second_variable << endl;
    }
};
class child:public intermediate{
    int third_variable;

public:
    void get_c(){
        cout << "Enter C: " << endl;
        cin >> third_variable;
    }
    void calculate(){
       int  product = first_variable * second_variable * third_variable;
        cout << product<<endl;
    }
};
int main(){
    child cobj;
    cobj.get_A();
    cobj.get_B();
    cobj.get_c();
    cobj.calculate();
    return 0;
}