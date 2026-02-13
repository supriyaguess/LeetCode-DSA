#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int onesComp = ~num;        // 1's complement
    int twosComp = ~num + 1;    // 2's complement

    cout << "Original number: " << num << endl;
    cout << "1's Complement:  " << onesComp << endl;
    cout << "2's Complement:  " << twosComp << endl;

    return 0;
}

// 1’s Complement

//Flip all bits.
//0 → 1 and 1 → 0

//5  = 00000101
//1’s complement = 11111010

// 2’s Complement

//Take 1’s complement and add 1

//11111010
//+       1
//---------
//11111011
