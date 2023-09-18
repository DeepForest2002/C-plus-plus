#include<iostream>
using namespace std;
class grandparent{
    public:
    grandparent(int x){
        cout << "GrandParent" << endl;
    }
    grandparent(){
        cout << "Default Grandparent" << endl;
    }
};
class parent1:virtual public grandparent{
    public:
    parent1(int x):grandparent(x){
        cout << "Parent1" << endl;
    }
};
class parent2: virtual public grandparent{
    public:
    parent2(int x):grandparent(x){
        cout << "Parent2" << endl;
    }
};
class child:public parent1,public parent2{
    public:
    child(int x):parent1(x),parent2(x){
        cout << "Child";
    }
};
int main(){
    child cobj(45);
    return 0;
}