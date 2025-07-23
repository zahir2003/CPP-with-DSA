// 7) WAF to reverse an integer n.

#include<iostream>
using namespace std;
int reverseNum(int n) {
    int reverse = 0;
    while(n!=0) {
        int digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    }
    return reverse;
}
int main() {
    int n;
    cout<<"Enter a integer number : ";
    cin>>n;
    cout<<"The reverse of "<<n<<" is : "<<reverseNum(n);
    return 0;
}