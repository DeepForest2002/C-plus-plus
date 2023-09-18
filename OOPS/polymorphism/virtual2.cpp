#include<iostream>
using namespace std;
class shape{
    protected:
    int lenght;
    int width;
    public:
    void set_values(){
        cin >> lenght;
        cin >> width;
    }
    virtual void get_area(){
        cout << "This is parent class area" << endl;
    }
};
class square:public shape{
    public:
    void read_input(){
        set_values();
    }
    void get_area(){
        cout << "The area is: " << lenght * width;
    }

};
int main(){
    return 0;
}