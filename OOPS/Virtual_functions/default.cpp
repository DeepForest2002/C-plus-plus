#include<iostream>
using namespace std;
class base{
    public:
        virtual void function(int x = 10){
            cout << "Base class: " << x<<endl;
        }
};
class derived:public base{
    public:
    void function(int x){
            cout << "Derived class: " << x << endl;
    }
};
int main(){
    base *bptr;
    derived dobj;
    bptr = &dobj;
    bptr->function();
    return 0;
}