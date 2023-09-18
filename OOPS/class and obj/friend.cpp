#include<iostream>
using namespace std;
class parent{
    private:
        int private_variable;
    protected:
        int protected_variable;
    public:
    parent(int private_variable,int protected_variable){
        this->private_variable = private_variable;
       this-> protected_variable = protected_variable;
    }
    friend class fr;
};
class fr{
    public:
    void print_values(parent &t){
        cout << t.private_variable<<endl;
        cout << t.protected_variable << endl;
    }
};
int main(){
    parent pobj(10,20);
    fr fobj;
    fobj.print_values(pobj);
    return 0;
}