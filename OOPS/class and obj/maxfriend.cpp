#include<iostream>
using namespace std;
//Forward declaration
class xyz;
class abc{
    int a;
    public:
    void setdata(int val){
        a = val;
    }
    friend void max(abc, xyz);
};
class xyz{
    int y;
    public:
    void setdata(int val){
        y = val;
    }
    friend void max(abc, xyz);
};
void max(abc t1, xyz t2){
    if(t1.a>t2.y){
        cout << t1.a;
    }
    else{
        cout << t2.y;
    }
}
int main(){
    abc a;
    xyz x;
    a.setdata(12);
    x.setdata(15);
    max(a, x);
    return 0;
}