#include<iostream>
using namespace std;
class A{
    int x, y;
    public:
        A(int val1, int val2);
        void printvalues();
};
A::A(int val1, int val2){
        x = val1;
        y = val2;
}
void A::printvalues(){
        cout << x << " " << y;
}
int main(){
        A obj(10, 20);
        obj.printvalues();
        return 0;
}