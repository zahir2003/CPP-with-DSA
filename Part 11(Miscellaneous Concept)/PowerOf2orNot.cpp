// 5) How to find if a number is power of 2 or not using loop.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 0) {
        cout << n << " is not a power of 2." << endl;
        return 0;
    }
    bool isPowerOfTwo = true;
    while (n > 1) {
        if (n % 2 != 0) {
            isPowerOfTwo = false;
            break;
        }
        n /= 2;
    }
    if (isPowerOfTwo) {
        cout << "The number is a power of 2." << endl;
    } else {
        cout << "The number is not a power of 2." << endl;
    }
    return 0;
}