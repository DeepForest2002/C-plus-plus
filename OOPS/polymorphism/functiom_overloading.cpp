#include<iostream>
using namespace std;
class function_overloading{
    public:
     void func_over(int x){
        cout << x<<endl;
    }
    void func_over(int  x){
        cout << x<<endl;
    }
    void func_over(int x, int y){
        cout << x << "and " << y<<endl;
    }
   /* int func_over(double y){
        return y;
    }*/
};
int main(){
    function_overloading fobject;
    fobject.func_over(2);
    fobject.func_over(56.26);
    fobject.func_over(2, 23);
    return 0;
}