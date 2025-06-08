/*
Write a program that prompts the user to enter some number of pennies (1-cent
coins), nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins),
half-dollar (50-cent coins), and one-dollar coins (100-cent coins). Query the
user separately for the number of each size coin, e.g, "How many pennies do you
have?" Then your program should print out something like this:

You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all your coins is 573 cents.

Make some improvements: if only one of a coin is reported, make the output more
grammatically correct, e.g, 14 dimmes and 1 dime (not 1 dimes). Also, report
the sum in dollars and cents, i.e, .73 instead of 573 cents.
*/

#include <iostream>

int main() {
    int pennies;       // 1-cent
    int nickels;       // 5-cent
    int dimes;         // 10-cent
    int quarters;      // 25-cent
    int half_dollars;  // 50-cent
    int one_dollar;    // 100-cent

    // Input
    std::cout << "How many pennies do you have? ";
    std::cin >> pennies;

    std::cout << "How many nickels do you have? ";
    std::cin >> nickels;

    std::cout << "How many dimes do you have? ";
    std::cin >> dimes;

    std::cout << "How many quartes you have? ";
    std::cin >> quarters;

    std::cout << "How many half dollars do you have? ";
    std::cin >> half_dollars;

    std::cout << "How many one dollar do you have? ";
    std::cin >> one_dollar;

    // Calculations
    double total_cents = (pennies * 1) +
        (nickels * 5) +
        (dimes * 10) +
        (quarters * 25) +
        (half_dollars * 50) +
        (one_dollar * 100);

    double total_dollars = total_cents / 100;

    // Output
    if (pennies == 1) {
        std::cout << "You have " << pennies << " pennie.\n";
    } else {
        std::cout << "You have " << pennies << " pennies.\n";
    }

    if (nickels == 1) {
        std::cout << "You have " << nickels << " nickel.\n";
    } else {
        std::cout << "You have " << nickels << " nickels.\n";
    }

    if (dimes == 1) {
        std::cout << "You have " << dimes << " dime.\n";
    } else {
        std::cout << "You have " << dimes << " dimes.\n";
    }

    if (quarters == 1) {
        std::cout << "You have " << quarters << " quarter.\n";
    } else {
        std::cout << "You have " << quarters << " quarters.\n";
    }

    if (half_dollars == 1) {
        std::cout << "You have " << half_dollars << " half_dollar.\n";
    } else {
        std::cout << "You have " << half_dollars << " half_dollars.\n";
    }

    if (one_dollar == 1) {
        std::cout << "You have " << one_dollar << " one_dollar.\n";
    } else {
        std::cout << "You have " << one_dollar << " one_dollars.\n";
    }

    std::cout << "The value of all your coins is "
              << total_cents
              << " cents or "
              << "$" << total_dollars << " dollars.\n";

    return 0;
}
