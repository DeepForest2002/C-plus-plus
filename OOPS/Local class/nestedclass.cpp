#include<iostream>
using namespace std;
class outer_class{
    int data;
    public:
    class inner_class{
        public:
        void inner_clasFunction(outer_class &dt){
            cout << dt.data;
        }
    };
    void set_data(int x){
        data = x;
    }
};
int main(){
    // nested_class object;
    outer_class obj;
    obj.set_data(12);
    outer_class::inner_class innerObject;
    innerObject.inner_clasFunction(obj);
    return 0;
}