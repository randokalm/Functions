#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    // If the number is less than 2, it's not prime
    if (num < 2) {
        return false;
    }

    // Check for divisibility from 2 to the square root of the number
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false; // If divisible by any number, it's not prime
        }
    }
    return true; // If not divisible by any number, it's prime
}

int main() {
    int number;
    // Prompt the user to enter a number
    std::cout << "Enter a number and I'll tell you whether it is prime: ";
    std::cin >> number;

    // Check if the entered number is prime using isPrime function
    if (isPrime(number)) {
        std::cout << number << " is prime." << std::endl;
    } else {
        std::cout << number << " is NOT prime." << std::endl;
    }

    return 0;
}
