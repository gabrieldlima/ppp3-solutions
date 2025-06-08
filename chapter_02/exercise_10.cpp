/*
Write a program that takes an operation followed by two operands and outputs the
result. For example:

+ 100 3.14
* 45

Read the operation into a string called operation and use an if-statement to fi-
gure out which operation the user wants, for example, if (operation == "+). Read
the operands in variables of type double. Implement this for operations called
+, -, /, plus, minus, mul, and div with their obvious meanings.
*/

#include <iostream>

int main() {
    std::string operation;
    double value1 = { 0 };
    double value2 = { 0 };

    std::cout << "Please, enter the operation followed by two float values: \n";
    std::cin >> operation >> value1 >> value2;

    if (operation == "+" || operation == "plus") {
        std::cout << "Result: " << value1 + value2;
    } else if (operation == "-" || operation == "minus") {
        std::cout << "Result: " << value1 - value2;
    } else if (operation == "*" || operation == "mul") {
        std::cout << "Result: " << value1 * value2;
    } else if (operation == "/" || operation == "div") {
        std::cout << "Result: " << value1 / value2;
    } else {
        std::cout << "Please enter a valid operator";
    }

    return 0;
}
