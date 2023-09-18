#include<iostream>
#include<string>
using namespace std;
class cons{
    public:
        int id;
        //Creating a default constructor
        cons(){
            cout << "Default constructor is called"<< endl;
            id = 5;
        }
        //Creating a parametarized constructore
        cons(int x){
            cout << "Parametarized constructor is called"<<endl;
            id = x;
        }
};
int main(){
        cons obj;
        cout << "Id is: " << obj.id<<endl;
        cons obj2(12);
        cout << "Id is: " << obj2.id;
        return 0;
}