#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout << "Base constructor" << endl;
    }
    virtual ~base(){
        cout << "Base Destrcutor" << endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout << "Derived constructor" << endl;
    }
    ~derived(){ 
        cout << "Derived destructor" << endl;
    }
};
int main(){
    derived *d = new derived;
    base *b = d;
    delete b;
    return 0;
}