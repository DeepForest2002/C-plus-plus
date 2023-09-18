#include<iostream>
using namespace std;
class abstract_class{
    protected:
    int variable;
    public:
        virtual void print() = 0;
        abstract_class(int v1){
            variable = v1;
            cout << "Base constructor" << endl;
        }
};
class derived:public abstract_class{
    protected:
        int variable2;
        public:
        derived(int v1,int v2):abstract_class(v1){
            variable2 = v2;
        }
        void print(){
            cout << variable2 << " " << variable << endl;
        }
        
};
int main(){
        derived dobj(4, 5);
        dobj.print();
        abstract_class *aptr = new derived(10,12);
        aptr->print();
        delete aptr;
        return 0;
}