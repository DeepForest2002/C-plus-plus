#include<iostream>
using namespace std;
struct student{
    int roll=12;
    int reg=2021;
    //creating a function
    void printdetails(){
        cout << roll << endl;
        cout << reg << endl;
    }
};
int main(){
    struct student s1;
    s1.roll = 45;
    s1.reg = 2020;
    s1.printdetails();
    //Create the array of structures
    struct student arr[10];
    arr[0].roll = 22;
    arr[1].reg = 2021;
    cout << arr[0].roll << " " << arr[1].reg;
    return 0;
}