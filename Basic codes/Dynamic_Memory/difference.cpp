#include<iostream>
using namespace std;
class difference{
    public:
    difference(){
        cout << "Constructor has been called" << endl;
    }
    ~difference(){
        cout << "Destructor is called" << endl;
    }
};
int main(){
    //using new
    // difference *obj = new(nothrow) difference;
    difference *obj = (difference *)malloc(sizeof(difference));
    if(obj==NULL){
        cout << "Memory allocation is not successfull";
    }
    else{
        cout << "Memory allocation successfull"<<endl;
    }
    // free(obj);
    delete obj;
    cout << "Memory is deallocated";
    return 0;
}