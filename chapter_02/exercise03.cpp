/*
Write a program that doesn't do anything, but declares a number of variables
with legal and illegal names (such as int double = 0;), so that you can see how
the compilers reacts.
*/

#include <iostream>

int main() {
    int double = 0;
    // g++ error: expected unqualified-id before '=' token

    int string = "Hello World\n";
    // g++ error: invalid convertion from 'const char*' to 'int'

    int if = 0;
    // g++ error: expected unqualified-id before 'if'

    std::string 2name_name = "Gabriel Lima";
    // g++ error: expected unqualified-id before numeric constant

    double @double_n = 3.14;
    // g++ error: stray '@' in program

    return 0;
}
