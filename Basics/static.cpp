#include<iostream>
#include<string>
using namespace std;
/*void st(){
    static int count = 0;
    cout << count;
    count++;
}
void nonst(){
    int ncount = 0;
    cout << ncount;
    ncount++;
}*/
class st{
    public:
        static int i;
        void  static me(){
            cout << i;
        }
};
int st::i = 0;
int main(){
        st obj;
        obj.me();
        return 0;
}