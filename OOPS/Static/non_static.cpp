#include<iostream>
using namespace std;
class nonStatic{
    int nonStaticVariable;
    public:
    nonStatic(int var){
        nonStaticVariable = var;
    }
    static void St_function(nonStatic &object){
        cout << object.nonStaticVariable;
    }
};
int main(){
    nonStatic obj(45);
    nonStatic::St_function(obj);
    return 0;
}