#include<iostream>
#include<string>
using namespace std;
class cname{
    public:
        int a;
        string name;
        void func(){
            cout << "Value:" << a<<endl;
        }
        void printname();
};
void cname::printname(){
        cout << "Name is: " << name;
}
int main(){
        cname obj;
        obj.a = 20;
        obj.func();
        obj.name = "Sayan";
        obj.printname();
        return 0;
}