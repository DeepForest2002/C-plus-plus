#include<iostream>
#include<typeinfo>
using namespace std;
class animal{
    public:
    virtual void speak(){
        cout << "Animal speaks";
    }
};
class dogs:public animal{
    public:
    void speak(){
        cout << "dog barks" << endl;
    }
};
class cats:public animal{
    public:
    void speak(){
        cout << "Cat meows" << endl;
    }
};
int main(){
    animal *animalptr = new dogs();
    if(dogs *dptr=dynamic_cast<dogs*>(animalptr)){
        dptr->speak();
    }
    else if(cats *cptr=dynamic_cast<cats*>(animalptr)){
        cptr->speak();
    }
    const type_info &typeinfo = typeid(*animalptr);
    if(typeinfo==typeid(dogs)){
        cout << "Object is of type dogs" << endl;
    }
    else if(typeinfo==typeid(cats)){
        cout << "Object is of type cats" << endl;
    }
delete animalptr;
    return 0;
}