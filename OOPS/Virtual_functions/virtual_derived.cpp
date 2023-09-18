#include<iostream>
using namespace std;
class base{
    public:
    virtual void function(){
        cout << "Base class function" << endl;
    }
};
class derived1:public base{
    public:
    void function(){
        cout << "Derived1 class function" << endl;
    }
};
class derived2:public derived1{
    public:
    void function(){
        cout << "Derived2 class function" << endl;
    }
};
int main(){
    derived2 d2obj;
    derived1 *d1ptr;
    d1ptr = &d2obj;
    d1ptr->function();
    return 0;
}