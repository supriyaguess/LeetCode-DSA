#include <iostream>
#include <algorithm>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";

    string binary = "";

    while (n > 0) {
        binary += (n % 2) + '0';
        n /= 2;
    }

    reverse(binary.begin(), binary.end());
    return binary;
}

int main() {
    int n;
    cin >> n;

    cout << decimalToBinary(n);

    return 0;
}
