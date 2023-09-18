#include<iostream>
using namespace std;
class shallow{
    private:
        int data;
    public:
    shallow(int val){
        data = val;
    }
    shallow(shallow &t){
        data = t.data;
    }
    void get_data(){
        cout << data << endl;
    }
};
class shallowcopy{
    private:
        int *data;
    public:
    shallowcopy(){
        data = new int;
    }
    void set_data(int value){
        *data = value;
    }
    //Copy constructor
    shallowcopy(const shallowcopy &object){
        data = object.data;
    }
    int get_data()const{
        return *data;
    }
    ~shallowcopy(){
        delete data;
    }
};
int main(){
    shallowcopy object;
    object.set_data(12);
    shallowcopy obj2 = object;
    object.set_data(23);
    cout << object.get_data() << " and " << obj2.get_data();
    return 0;
}