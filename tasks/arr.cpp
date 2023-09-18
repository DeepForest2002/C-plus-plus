#include <iostream>
#include <sstream>
#include <string>

int main() {
    // Creating a stringstream
    std::stringstream ss;

    // Inserting data into the stringstream
    int num = 42;
    double pi = 3.14159;
    ss << "The number is: " << num << " and Pi is: " << pi;

    // Converting the stringstream to a string
    std::string result = ss.str();
    std::cout << result << std::endl;

    // Extracting data from the stringstream
    int extractedNum;
    double extractedPi;

    ss >> extractedNum >> extractedPi;

    std::cout << "Extracted number: " << extractedNum << std::endl;
    std::cout << "Extracted Pi: " << extractedPi << std::endl;

    return 0;
}
