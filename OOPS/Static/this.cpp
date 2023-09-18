#include<iostream>
using namespace std;
class this_class{
    //Class members
    int data;
    int value;
    int variable;
    public:
    //Local variable
    this_class(int data, int value, int variable){
        this->data = data;
        this->value = value;
        this->variable = variable;
    }
    void print_details(){
        cout << data << " " << value << " " << variable;
    }
};
int main(){
    this_class object(10,20,30);
    object.print_details();
    return 0;
}