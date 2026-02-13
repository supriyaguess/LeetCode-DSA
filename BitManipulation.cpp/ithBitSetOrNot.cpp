#include <iostream>
using namespace std;

bool checkKthBit(int n, int k)
{
    // check if k-th bit is set
    // if(n &(1 << k )) != 0 // left shift
    return (n >> k) & 1; // masking
}
int main()
{
    int n = 5; // 0101
    int k = 0;

    if (checkKthBit(n, k))
        cout << "Bit is set\n";
    else
        cout << "Bit is not set\n";

    return 0;
}

// bool isKthBitSet(int n, int k) {return ((n >> k) & 1) == 1;} RightShift
// bool isKthBitSet(int n, int k) {return (n & (1 << k)) != 0;} left shift
