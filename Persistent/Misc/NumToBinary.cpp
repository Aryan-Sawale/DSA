#include <iostream>
#include <string>

std::string intToBinary(int number) {
    if (number == 0) {
        return "0";
    }

    std::string binary;
    while (number > 0) {
        binary = (number % 2 == 0 ? "0" : "1") + binary;
        number /= 2;
    }

    return binary;
}

int main() {
    int number = 42;  // Replace 42 with your integer

    std::string binaryRepresentation = intToBinary(number);

    std::cout << "Binary representation of " << number << " is: " << binaryRepresentation << std::endl;

    return 0;
}