#include <iostream>
#include "question3.h"

int main() {
    int num;
    char choice;

    do {
        std::cout << "Enter a number (1-15) to get the Fibonacci number: ";
        std::cin >> num;

        while (num < 1 || num > 15) {
            std::cout << "Invalid input! Please enter a number between 1 and 15: ";
            std::cin >> num;
        }

        int fib_number = get_fib_number(num);
        std::cout << "Fibonacci number at position " << num << " is: " << fib_number << std::endl;

        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
