#include<iostream>
#include<string>
using namespace std;
class vehicle{
    string company;
    int year;
    public:
    void set_vehicle(){
        cout << "Enter Company: "<<endl;
        getline(cin, company);
        cout << "Enter Year: " << endl;
        cin >> year;
    }
    void get_vehicle(){
        cout << company << " " << year<< " ";
    }
};
class car_details:private vehicle{
    int mileage;
    int price;
    public:
    void set_car_details(){
        set_vehicle();
        cout << "Enter Mileage: " << endl;
        cin >> mileage;
        cout << "Enter Price: " << endl;
        cin >> price;
    }
    void print(){
        get_vehicle();
        cout << mileage <<" "<< price;
    }
};
int main(){
    car_details cobj;
    cobj.set_car_details();
    cobj.print();
    return 0;
}
