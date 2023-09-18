#include<iostream>
using namespace std;
class normal_class{
    public:
        void Normal_function();
};
void normal_class::Normal_function(){
        cout << "print";
}
void function(){
        static int m = 45;
        int nonstatic = 25;
        class Local_class
        {
        public:
            void Local_function(){
                cout <<m;
            };
            // static int variable;
            static void function();
        };
    Local_class obj;
    obj.Local_function();
}
int main(){
    function();
    return 0;
}