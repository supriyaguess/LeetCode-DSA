#include <iostream>
using namespace std;

void swapUsingXOR(int &a, int &b) {
    a = a^b;
    b = a^b;
    a = a^b;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = "<< x << ", y = " << y << endl;
    swapUsingXOR(x,y);

    cout << "After swap: x=" << x << ", y = " << y << endl;
    return 0;
}


//XOR = even no. of 1s ->0
//odd no.of 1s -> 1