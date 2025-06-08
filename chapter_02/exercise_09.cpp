/*
Write a program that converts spelled-out number such as "zero" and "two" into
digits, such as 0 and 2. When the user inputs a number, the program should print
out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and write
out not a number I know if the user enters something that doesn't correspond,
such as stupid computer!.
*/

#include <iostream>

int main() {
    std::string one = "one";
    std::string two = "two";
    std::string three = "three";
    std::string four = "four";
    std::string zero = "zero";
    std::string unknown = "not a number I know";
    std::string input;

    while (std::cout << "$> " && std::cin >> input) {
        if (input == one) {
            std::cout << "1\n\n";
        } else if (input == two) {
            std::cout << "2\n\n";
        } else if (input == three) {
            std::cout << "3\n\n";
        } else if (input == four) {
            std::cout << "4\n\n";
        } else if (input == zero) {
            std::cout << "0\n\n";
        } else {
            std::cout << unknown << "\n\n";
        }
    }

    return 0;
}
