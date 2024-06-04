#include <iostream>

int main() {
    double num1, num2;
    char operation;

    // Input the numbers and desired operation from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform the calculation based on the chosen operation
    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed.";
                return 0;
            }
            break;
        default:
            std::cout << "Error: Invalid operation.";
            return 0;
    }

    // Output the result
    std::cout << "Result: " << result;

    return 0;
}
