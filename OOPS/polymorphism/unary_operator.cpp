#include<iostream>
using namespace std;
class unary_operator{
	int feet;
	int inches;
public:
	unary_operator(int feet,int inches){
		this->feet=feet;
		this->inches=inches;
	}
	//Opeator overloading of unary increment operator
	/*void operator-(){
		feet--;
		inches--;
		cout<<"Feet and Inches = "<<feet <<" and "<<inches;
	}*/
	friend unary_operator operator-( unary_operator &uobject);
	void print(){
		cout<<feet<<" and "<<inches<<endl;
	}
};
unary_operator operator-( unary_operator &uobject){
	return unary_operator(--uobject.feet,--uobject.inches);
}
int main(){
	unary_operator uobject(45,56);
	uobject.print();
	unary_operator after=-uobject;
	after.print();
	return 0;
}