#include<iostream>
using namespace std;
class overloading{
	int value;
public:
	overloading(int value){
		this->value=value;
	}
	void print(){
		cout<<value<<endl;
	}
	//Creating a function to overload the & operator
	/*overloading* operator&(){
		return this;
	}*/
};
int main(){
	overloading obj(45);
	obj.print();
	overloading *customPointer;
	customPointer=&obj;
	cout<<"Custom pointer address: "<<customPointer;
	return 0;
}