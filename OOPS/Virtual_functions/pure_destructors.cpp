#include<iostream>
using namespace std;
class base{
    public:
        virtual ~base() = 0;
};
base::~base(){
        cout << "Base Destructor" << endl;
}
class derived:public base{
    public:
    ~derived(){
        cout << "Derived Destructor" << endl;
    }
};
int main(){
    base *bptr = new derived();
    delete bptr;
    return 0;
}