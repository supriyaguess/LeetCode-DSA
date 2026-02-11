#include <iostream>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;

    for (int i = 0; i < binary.length(); i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    return decimal;
}

int main() {
    string binary;
    cin >> binary;

    cout << binaryToDecimal(binary);

    return 0;
}
