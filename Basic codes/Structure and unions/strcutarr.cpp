#include<iostream>
using namespace std;
 struct structure{
    int roll;
    char first_letter;
    int marks;
};
void printdetails(struct structure records[3]){
    int length = 3;
    for (int i = 0; i < length;i++){
        cout << "Roll no is: " << records[i].roll << endl;
        cout << "First_letter is: " << records[i].first_letter << endl;
        cout << "Marks is: " << records[i].marks << endl;
    }
}
int main(){
    struct structure records[3] = {{20, 'S', 20}, {78, 'B', 89}, {56, 'A', 56}};
    printdetails(records);
    return 0;
}