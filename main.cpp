#include <iostream>
#include "binary.h"
#include "hex.h"

int main() {
    int choice;
    int decimal;
    std::string binary, hex;

    while (true) {
        // Operation selection menu
        std::cout << "Choose an operation:\n";
        std::cout << "1. Convert from decimal to binary\n";
        std::cout << "2. Convert from binary to decimal\n";
        std::cout << "3. Convert from decimal to hexadecimal\n";
        std::cout << "4. Convert from hexadecimal to decimal\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter the operation number: ";
        std::cin >> choice;

        if (choice == 5) {
            break;  // Exit the program
        }

        switch (choice) {
            case 1:  // Decimal to binary
                std::cout << "Enter a decimal number: ";
                std::cin >> decimal;
                binary = decimalToBinary(decimal);
                std::cout << "Decimal " << decimal << " to binary: " << binary << std::endl;
                break;

            case 2:  // Binary to decimal
                std::cout << "Enter a binary number: ";
                std::cin >> binary;
                decimal = binaryToDecimal(binary);
                std::cout << "Binary " << binary << " to decimal: " << decimal << std::endl;
                break;

            case 3:  // Decimal to hexadecimal
                std::cout << "Enter a decimal number: ";
                std::cin >> decimal;
                hex = decimalToHex(decimal);
                std::cout << "Decimal " << decimal << " to hexadecimal: " << hex << std::endl;
                break;

            case 4:  // Hexadecimal to decimal
                std::cout << "Enter a hexadecimal number: ";
                std::cin >> hex;
                decimal = hexToDecimal(hex);
                std::cout << "Hexadecimal " << hex << " to decimal: " << decimal << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    std::cout << "Program terminated.\n";
    return 0;
}
