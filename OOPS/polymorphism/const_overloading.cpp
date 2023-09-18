#include<iostream>
using namespace std;
class c1{
protected:
	int i;
public:
	c1(int variable){
		i=variable;
	}
	void func()const{
		cout<<"Const object called"<<endl;
	}
	void func(){
		cout<<"Normal function callled"<<endl;
	}
};
int main(){
	c1 cobject1(10);
	const c1 cobject2(12);
	cobject1.func();
	cobject2.func();
	return 0;
}