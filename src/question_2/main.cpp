#include <iostream>
#include "question2.h"

int main() {
    int num;
    char choice;
    
    do {
        std::cout << "Enter a number (1-15) to generate the Fibonacci sequence: ";
        std::cin >> num;
        
        if (num < 1 || num > 15) {
            std::cout << "Invalid input! Please enter a number between 1 and 15.\n";
            continue;
        }

        std::string fib_sequence = get_fib_sequence(num);
        std::cout << "Fibonacci sequence: " << fib_sequence << std::endl;

        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
