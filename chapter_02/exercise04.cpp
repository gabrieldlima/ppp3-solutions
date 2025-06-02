/*
Write a program that prompts the user to enter two integer values. Store these
values in int variables named val1 and val2. Write your program to determine the
smaller, larger, sum, differente, product, and ratio of these values and report
them to the user.
*/

#include <iostream>

int main() {
    int val1 = { 0 };
    int val2 = { 0 };

    std::cout << "Please enter two integer numbers: ";
    std::cin >> val1 >> val2;

    // Show the smaller number
    if (val1 < val2) {
	std::cout << "Smaller: " << val1 << '\n';
    } else {
	std::cout << "Smaller: " << val2 << '\n';
    }

    // Show the larger number
    if (val1 > val2) {
	std::cout << "Larger: " << val1 << '\n';
    } else {
	std::cout << "Larger: " << val2 << '\n';
    }

    // Show the sum
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';

    // Show the diff
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';

    // Show the product
    std::cout << val1 << " x " << val2 << " = " << val1 * val2 << '\n';

    // Show the ratio
    std::cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';

    return 0;
}
