#include<iostream>
using namespace std;
class base{
    public:
    void print(int x){
        cout << x + 3<<endl;
    }
};
class child:public base{
    public:
    void print(double x){
        cout << x + 3.3 << endl;
    }
};
int main(){
    child *cobj = new child;
    cobj->print(4);
    cobj->print(4.5);
    int *ptr;
    cout << sizeof(*ptr);
    return 0;
}