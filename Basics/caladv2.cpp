#include<iostream>
#include<math.h>
using namespace std;
int main(){
    char choice;
    int nums,i,size,result=0,result1=1;
	double result2;
	int numofdigits[100];
    while(1){
    	label:
        cout << "Enter your choice (+,-,*,/)\nEnter x for exit\n";
        cin >> choice;
        if(choice=='x'){
        	exit(0);
		}
        cout << "Enter the number of digits you want to calculate (max-100): ";
        cin >> size;
        cout<<"Enter numbers: "<<endl;
        for(i=0;i<size;i++){
        	cin>>numofdigits[i];
		}
		switch(choice){
			case '+':
				for(i=0;i<size;i++){
					result=result+numofdigits[i];
				}
				cout<<result<<endl;
				break;
			case '-':
				for(i=0;i<size;i++){
					result=result-numofdigits[i];
				}
				cout<<result<<endl;
				break;
			case '*':
				for(i=0;i<size;i++){
					result1=result1*numofdigits[i];
				}
				cout<<result1<<endl;
				break;
			case '/':
				for (i = 0; i < size;i++){
					result2 = result2*numofdigits[i]/numofdigits[i+1];
				}
				cout << result2 << endl;
				break;
				default:
					cout << "Not done";
				break;
		}
		cout<<"Enter Q to quite or Y key to continue"<<endl;
		cin>>choice;
		if(choice=='q'){
			cout<<"Qutting the program";
			goto end;
		}
		else if(choice=='y'){
			goto label;
		}
		else{
			cout<<"End";
		}
    }
	end:
    return 0;
}
