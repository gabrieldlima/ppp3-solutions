/*
Write a program to test an integer value to determine if it is odd or even. As
always, make sure your output is clear and complete. In other words, don't just
output yes or no. Your output should stand alone, like The value 4 is an even
number. Hint: See the remainder (module) operator.
*/

#include <iostream>

int main() {
    int number = { 0 };

    std::cout << "Please enter a integer number: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "The value " << number << " is an even number" << '\n';
    } else {
        std::cout << "The value " << number << " is an odd number" << '\n';
    }

    return 0;
}
