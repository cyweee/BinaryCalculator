#include <iostream>

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// from decimal to binary system
string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return (binary.empty()) ? "0" : binary;
}

// from binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

int main() {
    int choice;
    cout << "Select operation:\n";
    cout << "1. Decimal to binary\n";
    cout << "2. Binary to decimal\n";
    cout << "Enter the operation number: ";
    cin >> choice;

    if (choice == 1) {
        int decimal;
        cout << "Enter a decimal number: ";
        cin >> decimal;
        cout << "Number in binary: " << decimalToBinary(decimal) << endl;
    } else if (choice == 2) {
        string binary;
        cout << "Enter a binary number: ";
        cin >> binary;
        cout << "Number in decimal: " << binaryToDecimal(binary) << endl;
    } else {
        cout << "Incorrect selection.\n";
    }

    return 0;
}

