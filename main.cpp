#include <iostream>

using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction
int reduce(int &num, int &denom) {
    // Check for invalid input
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    int divisor = gcd(num, denom);

    // Reduce the fraction
    num /= divisor;
    denom /= divisor;

    return 1;
}

int main() {
    int num, denom;

    //  user input for numerator and denominator
    cout << "Enter the numerator: ";
    cin >> num;
    cout << "Enter the denominator: ";
    cin >> denom;

    // Reduce the fraction
    if (reduce(num, denom)) {
        cout << "The reduced fraction is: " << num << "/" << denom << std::endl;
    } else {
        cout << "Error: Invalid input. Both numerator and denominator must be positive integers." << std::endl;
    }

    return 0;
}




