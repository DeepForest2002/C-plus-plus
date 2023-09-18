#include<iostream>
using namespace std;
class first{
    static int a;
    static int b;
    static int c;
    public:
    static void print(){
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
};
int first::a = 45;
int first::b = 20;
int first::c = 5;
int main(){
    first first_object;
    cout << "Calling with the help of the object" << endl;
    first_object.print();
    cout << "Calling without the help of the object" << endl;
    first::print();
    return 0;
}