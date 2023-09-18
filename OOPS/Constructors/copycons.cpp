#include<iostream>
using namespace std;
//Implicit copy constructor
class cl{
    private:
        int x;
    public:
    cl(int var){
        x = var;
    }
    void print(){
        cout << x<<endl;
    }
};
int main(){
    cl obj(12);
    obj.print();
    cl obj2(obj);
    obj2.print();
    return 0;
}