#include<iostream>
using namespace std;
class deepcopy{
    int *data;
    public:
    deepcopy(){
        data = new int;
    }
    void set_data(int value){
        *data = value;
    }
    deepcopy(deepcopy &t){
        data = new int(*t.data);
    }
    ~deepcopy(){
        delete data;
    }
    int get_data(){
        return *data;
    }
};
int main(){
    deepcopy object;
    object.set_data(23);
    deepcopy object2 = object;
    object.set_data(2);
    cout << object.get_data() << " and " << object2.get_data();
    return 0;
}