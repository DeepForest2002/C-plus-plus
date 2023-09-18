#include<iostream>
using namespace std;
class Base_class{
    public:
    void print(){
        cout << "This is print function of base class" << endl;
    }
};
class derived_class:public Base_class{
    public:
    void print(){
        cout << "This is the print function of derived class" << endl;
    }
};
int main(){
    derived_class dobj;
    dobj.print();
    return 0;
}