#include <string>
#include <iostream>

class Calculator {

    public:
    std::string name;

    // Getter for the calculator name
    std::string getCalculatorName() {
        return name;
    }

    // Setter for the calculator name, changed return type to void
    void setCalculatorName(std::string name) {
        this->name = name;
    }

    // Add function
    int add(int a, int b) {
        return a + b;
    }

    // Subtract function
    int subtract(int a, int b) {
        return a - b;
    }

    // Multiply function
    int multiply(int a, int b) {
        return a * b;
    }

    // Divide function with a check for division by zero
    int divide(int a, int b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero is undefined." << std::endl;
            return 0; // Returning 0 as an indication of error
        }
        return a / b;
    }
};

int main() {

    using namespace std;

    Calculator calculator;
    
    // Set the calculator's name
    calculator.setCalculatorName("My Calculator");

    // Output the calculator's name
    cout << "Calculator Name: " << calculator.getCalculatorName() << endl;

    // Perform some calculations
    cout << "Add: " << calculator.add(10, 5) << endl;
    cout << "Subtract: " << calculator.subtract(10, 5) << endl;
    cout << "Multiply: " << calculator.multiply(10, 5) << endl;
    cout << "Divide: " << calculator.divide(10, 5) << endl;
    cout << "Divide by zero test: " << calculator.divide(10, 0) << endl;  // This will display an error


    Calculator* calcPtr = new Calculator();

    return 0;
}