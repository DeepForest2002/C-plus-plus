#include<iostream>
using namespace std;
class complex{
private:
	int real;
	int image;
public:
	complex(int r,int i){
		real=r;
		image=i;
	}
	void print(){
		cout<<real<<"+ i"<<image;
	}
	friend complex operator+(const complex &c1, const complex &c2);
};
complex operator+(const complex &c1,const complex &c2){
	return complex(c1.real+c2.real,c1.image+c2.image);
}
int main(){
	complex c1(12,23),c2(56,10);
	complex c3=c1+c2;
	c3.print();
	return 0;
}