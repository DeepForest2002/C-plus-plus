#include<iostream>
using namespace std;
class base{
    private:
        int data;
    public:
        virtual void print() = 0;//pure virtual function
        int get_data(){
            return data;
        }
};
class derived:public base{
    private:
        int x;
    public:
    void print(){
            cout << "Derived function is called"<<endl;
    }
    int get_y(){
            return x;
    }
};
int main(){
    derived d;
    d.print();
    // base bobj;
    base *bptr;
    bptr = &d;
    bptr->print();
    return 0;
}