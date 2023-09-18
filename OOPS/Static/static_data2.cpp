//Without any object
#include<iostream>
using namespace std;
class first{
    int x;
public:
    first(){
        cout << "First";
    }
};
class second{
    static first f;
    public:
    second(){
        cout << "Second";
    }
    static first  getF(){
        return f;
    }
};
//Global declaration
first second::f;
int main(){
    first f = second::getF();
    return 0;
}