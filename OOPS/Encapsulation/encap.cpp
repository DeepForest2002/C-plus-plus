#include<iostream>
#include<string>
using namespace std;
class details{
    string name;
    int age;
    public:
    void set_details(string name,int age){
        this->name = name;
        this->age = age;
    }
    void get_details(){
        cout << "The age is:" << age<<endl;
        cout << "The name is: " << name;
    }
};
int main(){
    details dobject;
    dobject.set_details("Ram", 32);
    dobject.get_details();
    return 0;
}
