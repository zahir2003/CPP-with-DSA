// 8) WAF to print nth Fibonacci.

#include <iostream>
using namespace std;
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        cout << t1 << " "; 
        nextTerm = t1 + t2; 
        t1 = t2;           
        t2 = nextTerm;     
    }
    cout << endl;
}
int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        printFibonacci(num);
    }
    return 0;
}