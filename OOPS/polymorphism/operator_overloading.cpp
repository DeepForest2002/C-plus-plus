#include<iostream>
using namespace std;
class operator_overloading{
    private:
        int a;
        int b;
    public:
    operator_overloading(int r=0,int i=0){
        a = r;
        b = i;
    }
    operator_overloading operator+ (const operator_overloading &object){
        operator_overloading opv;
        opv.a = a + object.a;
        opv.b = b + object.b;
        return opv;
    }
    void add(){
        cout << a << "+"<<"i"<< b;
    }
};
int main(){
    operator_overloading obj(3,4), obj2(5,6);
    operator_overloading result = obj+obj2;
    result.add();
    return 0;
}