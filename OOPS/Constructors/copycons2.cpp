#include<iostream>
#include<string>
using namespace std;
class sample{
    private:
        int roll;
        string name;
        int reg_no;
    public:
    //Create a constructor
        sample(int x, string y, int z);
        //copy constructor
        sample(sample &t){
            roll = t.roll;
            name = t.name;
            reg_no = t.reg_no;
        }
        void print_values();
};
sample::sample(int x,string y, int z){
        roll = x;
        name = y;
        reg_no = z;
}
void sample::print_values(){
        cout << roll << " " << name << " " << reg_no<<endl;
}
int main(){
        sample obj(10, "Ram", 2020);
        obj.print_values();

        //Creating another object using previous object
        sample obj2(obj);
        obj2.print_values();
        return 0;
}