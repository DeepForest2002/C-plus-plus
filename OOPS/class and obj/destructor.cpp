#include<iostream>
using namespace std;
 class dest{
    public:
        int id;
        ~dest(){
            cout << "Destructor called for id: " << id << endl;
        }
} obj;
int main(){
        obj.id = 7;
        int i = 0;
        while(i<5){
          dest  obj1;
            obj1.id = i;
            i++;
        }//scope of obj1  ends here
        return 0;
} //object 1 scope ends here