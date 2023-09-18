#include<iostream>
using namespace std;
int main(){
    enum class color
    {
        red,
        green,
        blue,
    };
    enum class behaviour
    {
        good,
        bad,
    };
    enum class color2
    {
        red,
        green,
        blue,
    };
    int red = 8;
    color object = color::green;
    if(object==color::red){
        cout << "It is red";
    }
    else{
        cout << "It is green";
    }
    return 0;
}