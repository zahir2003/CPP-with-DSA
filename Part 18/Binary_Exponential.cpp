#include <iostream>
#include <climits> 
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        if (x == 0) return 0.0; // Handle the case where x is 0
        if (x == 1) return 1.0; // Handle the case where x is 1
        if (x == -1 && n%2 == 0) return 1.0; // Handle the case where x is -1
        if (x == -1 && n%2 != 0) return -1.0; // Handle the case where x is -1
        long binform = n;
        if (n < 0) {
            x = 1 / x;
            binform = -binform;
        }
        double ans = 1;
        while (binform > 0) {
            if (binform % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binform /= 2;
        }
        return ans;
    }
};


int main() {
    Solution sol;
    
    // Test cases
    cout << "2^10 = " << sol.myPow(2.0, 10) << endl;     // Expected: 1024
    cout << "2^-2 = " << sol.myPow(2.0, -2) << endl;     // Expected: 0.25
    cout << "0^5 = " << sol.myPow(0.0, 5) << endl;       // Expected: 0
    cout << "5^0 = " << sol.myPow(5.0, 0) << endl;       // Expected: 1
    cout << "2^-2147483648 = " << sol.myPow(2.0, INT_MIN) << endl; // Very small positive number

    return 0;
}