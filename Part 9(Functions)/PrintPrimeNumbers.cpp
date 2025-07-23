// 7) WAF to print all Prime numbers from 2 to N.

#include<iostream>
using namespace std;
int Prime(int n) {
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i <= num - 1; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true) {
            cout << num << " "; 
        }
    }
    return 0; 
}
int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The Prime numbers are : ";
    Prime(n); 
    return 0;
}