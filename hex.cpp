#include "hex.h"
#include <string>
#include <cmath>
#include <algorithm>

// decimalToHex
std::string decimalToHex(int decimal) {
    std::string hex = "";
    const char* hexDigits = "0123456789ABCDEF";

    while (decimal > 0) {
        hex = hexDigits[decimal % 16] + hex;
        decimal /= 16;
    }
    return hex.empty() ? "0" : hex;
}

// hexToDecimal
int hexToDecimal(const std::string& hex) {
    int decimal = 0;
    int power = 0;
    std::string hexCopy = hex;

    std::transform(hexCopy.begin(), hexCopy.end(), hexCopy.begin(), ::toupper);

    for (int i = hexCopy.length() - 1; i >= 0; i--) {
        char c = hexCopy[i];
        int value = (c >= '0' && c <= '9') ? (c - '0') : (c - 'A' + 10);
        decimal += value * std::pow(16, power);
        power++;
    }
    return decimal;
}
