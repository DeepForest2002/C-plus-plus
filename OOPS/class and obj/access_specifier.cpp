#include<iostream>
using namespace std;
class access_sp{
    private:
        double radius;
        int value = 4;

    public:
    void calculate_area(double r){
        cout << "Area is: " << 3.14 * r * r;
        radius = r;
    }
};
class parent{
    protected:
        int id_protected;
};

//Creating a subclass that derives its members from base class
class subclass:public parent{
    public:
    void set_id(int id){
        cout << "Id is: " << id<<endl;
        id_protected = id;
    }
};
int main(){
    // access_sp obj;
    // obj.calculate_area(7);
    subclass subobj;
    subobj.set_id(12);
    return 0;
}