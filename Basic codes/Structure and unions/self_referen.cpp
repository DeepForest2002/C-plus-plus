#include<iostream>
using namespace std;
/*struct self{
    int data1;
    int data2;
    struct self *node;
};*/
struct multiple{
    int data;
    struct multiple *prev;
    struct multiple *next;
};
int main(){
    /*struct self obj1,obj2;
    obj1.data1 = 45;
    obj1.data2 = 46;
    obj1.node = NULL;
    obj2.data1 = 12;
    obj2.data2 = 3;
    obj2.node = NULL;
    //Linking obj1 and obj2
    obj1.node = &obj2;
    cout << obj1.node->data1;*/

    struct multiple obj1, obj2, obj3;
    obj1.data = 45;
    obj1.next = NULL;
    obj1.prev = NULL;

    obj2.data = 54;
    obj2.next = NULL;
    obj2.prev = NULL;

    obj3.data = 12;
    obj3.next = NULL;
    obj3.prev = NULL;

    //Linking with each others
    obj1.next = &obj2;
    obj3.prev = &obj2;
    obj2.next = &obj3;
    obj2.prev = &obj1;

    cout << obj1.next->data;
    cout << obj2.next->data;
    return 0;
}