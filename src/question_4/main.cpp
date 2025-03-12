#include <iostream>
#include "question4.h"

int main() {
    double mass, velocity;
    char choice;

    do {
        std::cout << "Enter the object's mass (kg): ";
        std::cin >> mass;
        while (mass <= 0) {
            std::cout << "Invalid mass! Please enter a positive value: ";
            std::cin >> mass;
        }

        std::cout << "Enter the object's velocity (m/s): ";
        std::cin >> velocity;
        while (velocity < 0) {
            std::cout << "Invalid velocity! Please enter a non-negative value: ";
            std::cin >> velocity;
        }

        double kinetic_energy = get_kinetic_energy(mass, velocity);
        std::cout << "Kinetic Energy: " << kinetic_energy << " Joules\n";

        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
