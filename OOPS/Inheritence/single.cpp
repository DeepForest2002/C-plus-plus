#include<iostream>
using namespace std;
class first{
    protected:
        int a;
    public:
    void setA(int x){
        a = x;
    }
    void getA(){
        cout << "A is: " << a<<endl;
    }
};
class second:public first{
    private:
        int b, product;
    public:
    void setvalues(int x,int y){
        setA(x);
        b = y;
    }
    void getB(){
        getA();
        cout <<"B is: "<<b<<endl;
    }
    void get_ans(){
        product = a * b;
        cout << product<<endl;
    }
};
int main(){
    second sobj;
    sobj.setvalues(12, 23);
    sobj.getB();
    sobj.get_ans();
    return 0;
}