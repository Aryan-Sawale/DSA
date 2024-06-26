#include <iostream>

// Function to find the Greatest Common Divisor (GCD) using Euclidean Algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int result = lcm(num1, num2);

    std::cout << "LCM of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}