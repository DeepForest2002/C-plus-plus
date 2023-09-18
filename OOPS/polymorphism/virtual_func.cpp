#include<iostream>
using namespace std;
class base_class{
    public:
    virtual void print(){
        cout << "This is a base class function" << endl;
    }
    void show(){
        cout << "Base show" << endl;
    }
};
class child_class:public base_class{
    public:
    void print(){
        cout << "This is a child class function" << endl;
    }
    void show(){
        cout << "Child show" << endl;
    }
};
int main(){
    base_class *baseptr;
    child_class cobj;
    baseptr = &cobj;
    baseptr->print();
    baseptr->base_class::print();
    return 0;
}