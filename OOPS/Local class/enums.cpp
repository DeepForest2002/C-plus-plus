#include<iostream>
using namespace std;
enum Names
{
    Asha,
    Sagnik,
    Prity,
};
int main(){
enum roll_no
{
    Sayan,
    Madhu ,
    Michel,
};
    enum roll_no obj = Madhu;
    enum Names nobj = Sagnik;
    if(obj==nobj){
        cout << "Madhu and Sagnik are same";
    }
    else{
        cout << "They are not same";
    }
    int Sayan = 45;
    return 0;
}