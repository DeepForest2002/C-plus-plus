#include<iostream>
#include<string>
using namespace std;
struct person{
    string name;
    int age;
};
int main(){
    int numofpeoples;
    cout << "Enter the number of peoples: " << endl;
    cin >> numofpeoples;
    //Allocating memory for object
    person* details = new person[numofpeoples];
    for (int i = 0; i < numofpeoples;i++){
        cout << "Enter name of person " << i + 1 << ": " << endl;
        cin >> details[i].name;
        cout << "Enter age for person " << i + 1 << ": " << endl;
        cin >> details[i].age;
    }
    //Printing those informations
    for (int i = 0; i < numofpeoples;i++){
        cout << "Name: " << details[i].name << endl;
        cout << "Age: " << details[i].age<<endl;
    }
    delete[] details;
    return 0;
}