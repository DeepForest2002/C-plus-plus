#include<iostream>
using namespace std;
class base{
    public:
    void func1(){
        cout << "Base func1" << endl;
    }
    virtual void func2(){
        cout << "Base func2" << endl;
    }
    virtual void func3(){
        cout << "Base func3" << endl;
    }
};
class derived:public base{
    public:
    void func2(){
        cout << "Derived func2" << endl;
    }
    void func3(int x){
        cout << "Derived func3" << endl;
    }
};
int main(){
    base *baseptr;
    derived dobj;
    baseptr = &dobj;
    baseptr->func1();
    baseptr->func2();
    baseptr->func3();
    return 0;
}