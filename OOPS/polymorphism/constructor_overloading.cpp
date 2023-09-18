#include<iostream>
using namespace std;
class constructor_overloading{
    public:
        int area;
        constructor_overloading()
        {
            area = 0;
    }
    constructor_overloading(int a, int b){
            area = a * b;
    }
    void display();
};
void constructor_overloading::display(){
    cout << area<<endl;
}
int main(){
    constructor_overloading cobject1;
    cobject1.display();
    constructor_overloading cobject2(10, 2);
    cobject2.display();
    return 0;
}