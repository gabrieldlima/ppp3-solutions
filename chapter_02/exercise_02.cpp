/*
Write a program in C++ that converts from miles to kilometers. Your program
should have a reasonable prompt for the user to enter a number of miles. Hint:
A mile is 1.609 kilometers.
*/

#include <iostream>

int main() {
    double miles = { 0 };
    double one_kilometer = { 1.609 };

    std::cout << "Please, enter the number of miles: ";
    std::cin >> miles;

    int result = miles * one_kilometer;

    std::cout << "Result: " << miles << "mi is equal " << result << "km.\n";

    return 0;
}
