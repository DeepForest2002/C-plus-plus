#include<iostream>
#include<string>
using namespace std;
//first convert all the characters to digits
int todigits(char ch){
    return (ch - '0');
}
int sumofStrings(string str){
    int length = str.length();
    //allocate memory equal to the string
    int sumofdigits[length];
    //initialize the first value with the first digit
    sumofdigits[0] = todigits(str[0]);
    int result = sumofdigits[0];

    //loop over all digits of the string
    for (int i = 0; i < length;i++){
        int numi = todigits(str[i]);
        //Update each sumofdigits from previous values
        sumofdigits[i] = (i + 1) * numi + 10 * sumofdigits[i - 1];
        //add current value to the result
        result = result + sumofdigits[i];
    }
    return result;
}
int main(){
    string str = "1234";
    cout<<sumofStrings(str);
    return 0;
}