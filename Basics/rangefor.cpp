#include<iostream>
using namespace std;
int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    /*for(int n: a){
        cout << n;
    }*/
    for(auto n: a){
        cout << n<<endl;
    }
    string str = "HELLO";
    for(char c:str){
        cout << c<<endl;
    }
    return 0;
}