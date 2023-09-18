#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Geeks For Geeks";
    size_t found = str.find("For");
    if(found!=string::npos){
        cout << found<<endl;
    }
    char c = 'M';
    size_t found2 = str.find(c);
    if(found2==string::npos){
        cout << "Not found"<<endl;
    }
    else{
        cout << found2;
    }
    string name = "Sayan";
    string name2 = "Pritam";
    int compare = name.compare(name);
    cout << compare<<endl;

    //Iterator functions
    string::iterator itr;
    itr = str.begin();
    cout << *itr;

    //Reverse Iterators
    string::reverse_iterator reverse;
    reverse = str.rbegin();
    cout << *reverse << endl;

    //Length functions
    cout << str.length() << "And capacity " << str.capacity();
    str.resize(10);
    cout << endl
         << str;
    return 0;
}