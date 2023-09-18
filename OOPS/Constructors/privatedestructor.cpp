#include<iostream>
using namespace std;
class custom{
    private:
    ~custom(){
        cout << "Destructor has been called";
    }
    public:
        friend void destructor_function(custom *);
        custom(){
        cout << "Constructor";
        }
        void function(){
        delete this;
        }
};
void destructor_function(custom *object){
        delete object;
}
int main(){
        // custom object;
        custom *object = new custom;
        // destructor_function(object);
        destructor_function(object);
        return 0;
}