#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main() {
    int number = 45;
    double pi = 3.14;
    string text = "Hello World";
    stringstream ss;
    
    // Writing into string stream with delimiters
    ss << "Number:" << number << ", Pi:" << pi << ", Text:" << text;
    
    // Reading from the string stream
    int parsed_number;
    double parsed_pi;
    string parsed_text;
    
    // Use delimiters to separate the values
    char delimiter;
    ss >> delimiter >> parsed_number >> delimiter >> parsed_pi >> delimiter >> parsed_text;
    
    cout << parsed_number << endl;
    cout << parsed_pi << endl;
    cout << parsed_text << endl;
    
    return 0;
}
