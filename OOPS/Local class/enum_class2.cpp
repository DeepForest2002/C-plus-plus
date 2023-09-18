#include<iostream>
using namespace std;
enum colors
{
    red,
    blue,
    green,
} color;
enum class car : char
{
    honda,
    tvs,
}bike;
int main(){
    cout << "The object size of color is:" << sizeof(color)<<endl;
    cout << "The object size of car is:" << sizeof(bike)<<endl;
    return 0;
}