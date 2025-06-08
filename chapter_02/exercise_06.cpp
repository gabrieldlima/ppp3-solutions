/*
Write a program that prompts the user to enter three integer values, and then
outputs the values in numerical sequence by commas. So, if the user enters the
values 10 4 6, the output should be 4, 6, 10. If two values are the same, they
should just be ordered together. So, the input 4 5 4 should give 4, 4, 5.
*/

#include <iostream>

int main() {
    int value1 = { 0 };
    int value2 = { 0 };
    int value3 = { 0 };

    std::cout << "Please, enter three integer values: ";
    std::cin >> value1 >> value2 >> value3;

    int smaller_value = { 0 };
    int middle_value = { 0 };
    int larger_value = { 0 };

    // Determine the smaller value
    if (value1 <= value2 && value1 <= value3) {
        smaller_value = value1;
    }
    else if (value2 <= value1 && value2 <= value3) {
        smaller_value = value2;
    }
    else {
        smaller_value = value3;
    }
        
    // Determine the larger value
    if (value1 >= value2 && value1 >= value3) {
        larger_value = value1;
    }
    else if (value2 >= value1 && value2 >= value3) {
        larger_value = value2;
    }
    else {
        larger_value = value3;
    }

    // Determine the middle value
    middle_value = value1 + value2 + value3 - smaller_value - larger_value;

    // Show the result
    std::cout << smaller_value << ", " << middle_value << ", " << larger_value;

    return 0;
}
