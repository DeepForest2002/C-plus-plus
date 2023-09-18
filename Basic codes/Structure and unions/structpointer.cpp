#include<iostream>
using namespace std;
struct student{
    int roll;
    char letter;
};
int main(){
    struct student s = {20, 'k'};
    struct student *ptr = &s;
    cout << ptr->letter<<" and "<<ptr->roll;
    return 0;
}