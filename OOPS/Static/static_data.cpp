#include<iostream>
using namespace std;
class A{
    private:
        int value;
    public:
    A(int x){
        value = x;
    }
    static int data;
    void print();
};
int A::data = 0;
void A::print(){
    cout << "value is: " << value <<" and Static value is: "<<data;
}
int main(){
    A object(12);
    object.print();
    A object2(3);
    object2.data = 12;
    object2.print();
    return 0;
}