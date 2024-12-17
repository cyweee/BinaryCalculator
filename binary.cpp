#include "binary.h"
#include <string>
#include <cmath>

// decimalToBinary
std::string decimalToBinary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary.empty() ? "0" : binary;
}

// binaryToDecimal
int binaryToDecimal(const std::string& binary) {
    int decimal = 0;
    int power = 0;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += std::pow(2, power);
        }
        power++;
    }
    return decimal;
}
