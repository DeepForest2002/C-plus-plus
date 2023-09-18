#include<iostream>
#include<string>
using namespace std;
//using inheritence
class base{
    protected:
        virtual string concatenate(string *str1, string *str2)=0;
};
class derived:public base{
    public:
    string concatenate(string *str1,string *str2){
        string temp;
        temp = *str1 + *str2;
        return temp;
    }
};
int main(){
    string str1 = "This is a string";
    string str2 = "This is added";
    //Concatination using for loop
    string new_string;
    for (int i = 0;str1[i]!='\0'; i++){
        new_string += str1[i];
    }
    for (int i = 0; str2[i] != '\0';i++){
        new_string += str2[i];
    }
    cout << new_string<<endl;
    derived dobj;
    cout<<dobj.concatenate(&str1, &str2);
    return 0;
}