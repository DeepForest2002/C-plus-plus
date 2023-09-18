#include<iostream>
using namespace std;
class parent{
    public:
    void show(){
        cout << "Parent show" << endl;
    }
    virtual void print(){
        cout << "Parent print" << endl;
    }
};
class child:public parent{
    void show(){
        cout << "child show" << endl;
    }
    void print(){
        cout << "child print" << endl;
    }
};
int main(){
    parent *p;
    child c;
    p = &c;
    p->print();
    p->show();
    return 0;
}