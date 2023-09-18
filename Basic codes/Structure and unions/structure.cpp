#include<iostream>
using namespace std;
/*struct student{
    int roll;
    string name;
    int reg_no;
};*/
 typedef struct student{
    int roll;
    string name;
    int reg_no;
} person;
int main(){
    person s1;
    s1.roll = 45;
    s1.name = "Manoj";
    s1.reg_no = 2020 - 259;
    cout << s1.roll<<endl;
    typedef int integer;
    integer i = 12;
    cout << i;
    typedef float decimal_number;
    decimal_number d = 45.23;
    cout << d<<endl;
    cout << sizeof(person);
    return 0;
}