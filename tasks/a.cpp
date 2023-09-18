// main.cpp
#include <iostream>
#include "myfunctions.h" // Include the header file
using namespace std;
int main() {
    int result = add(5, 3); // Call a function from the included file
    cout << "Result: " << result << std::endl;
    return 0;
}
