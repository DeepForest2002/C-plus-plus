#include<iostream>
using namespace std;
class first{
protected:
	int a;
public:
	first(){
		cout<<"Enter A: ";
		cin>>a; 
	}
	void displayA(){
		cout<<a<<endl;
	}
};
class second{
protected:
	int b;
public:
	second(){
		cout<<"Enter B: "<<endl;
		cin>>b; 
	}
	void displayB(){
		cout<<b<<endl;
	}
};
class third:public first,public second{
private:
	int c,product;
public:
	third(){
		cout<<"Enter C: "<<endl;
		cin>>c;
	}
	void displayC(){
		displayA();
		displayB();
		cout<<c<<endl;
	}
	void multiply(){
		product=a*b*c;
		cout<<product;
	}
};
int main(){
	third cobj;
	cobj.displayC();
	cobj.multiply();
	return 0;
}