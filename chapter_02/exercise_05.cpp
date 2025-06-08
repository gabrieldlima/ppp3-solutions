/*
Modify the program above (exercise 4) to ask the user to enter floating-point
values and store theme in double variables. Compare the outputs for the two
programs for some inputs of your choice.

Q: Are the results the same?
A: No.

Q: Should they be?
A: No.

Q: What's the difference?
A: They now have the floating part.
*/

#include <iostream>

int main() {
    double val1 = { 0 };
    double val2 = { 0 };

    std::cout << "Please enter two floating numbers: ";
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
