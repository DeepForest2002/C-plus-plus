#include<iostream>
using namespace std;
class base1{
    public:
        int a;
};
class base2:public base1{
    public:
        int b;
};
class base3:public base1{
    public:
        int c;
};
class base4:public base2,public base3{
    public:
        int d;
};
int main(){
        base4 bobject;
        bobject.base2::a = 45;
        bobject.base3::a = 23;
        cout << "A from class base2" << bobject.base2::a<<endl;
        cout << "A from class base3" << bobject.base3::a;
        return 0;
}