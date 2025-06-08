/*
Do exercise 6, but with three string values. So, if the user enters the values
Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald, Hemingway,
Steinbeck.
*/

#include <iostream>

int main() {
    std::string str1, str2, str3;

    std::cout << "Please, enter three names: ";
    std::cin >> str1 >> str2 >> str3;

    std::string first, second, third;

    if (str1 <= str2 && str2 <= str3) {
        first = str1;
        second = str2;
        third = str3;
    } else if (str1 <= str3 && str3 <= str2) {
        first = str1;
        second = str3;
        third = str2;
    } else if (str2 <= str1 && str1 <= str3) {
        first = str2;
        second = str1;
        third = str3;
    } else if (str2 <= str3 && str3 <= str1) {
        first = str2;
        second = str3;
        third = str1;
    } else if (str3 <= str1 && str1 <= str2) {
        first = str3;
        second = str1;
        third = str2;
    } else { // str3 <= str2 && str2 <= str1
        first = str3;
        second = str2;
        third = str1;
    }

    std::cout << first << ", " << second << ", " << third << std::endl;

    return 0;
}
