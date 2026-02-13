#include <iostream>
using namespace std;

// Check if kth bit is set
bool isKthBitSet(int n, int k) {
    return (n & (1 << k)) != 0;
}

// Set kth bit
int setKthBit(int n, int k) {
    return n | (1 << k);
}

// Clear kth bit
int clearKthBit(int n, int k) {
    return n & ~(1 << k);
}

// Toggle kth bit
int toggleKthBit(int n, int k) {
    return n ^ (1 << k);
}

int main() {
    int n, k;

    cout << "Enter number: ";
    cin >> n;

    cout << "Enter bit position (0-indexed): ";
    cin >> k;

    cout << "\nCheck kth bit: ";
    if (isKthBitSet(n, k))
        cout << "Bit is SET\n";
    else
        cout << "Bit is NOT SET\n";

    cout << "After setting kth bit:  " << setKthBit(n, k) << endl;
    cout << "After clearing kth bit: " << clearKthBit(n, k) << endl;
    cout << "After toggling kth bit: " << toggleKthBit(n, k) << endl;

    return 0;
}
