#include<iostream>
#include<string>
using namespace std;
class base{
    private:
        string str1;
        string str2;
    public:
        base(){
            str1 = "This is a String";
            str2 = "Now added";
        }
        friend void new_string(base &object);
};
void new_string(base &object){
        string temp;
        temp = object.str1 + object.str2;
        cout << temp;
}
using namespace std;
int main(){
        base baseobj;
        new_string(baseobj);
        return 0;
}