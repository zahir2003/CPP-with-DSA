// 4) Calculate sum of digits of a number.

#include<iostream>
using namespace std;
int sumD(int num) {
    int digSum = 0;
    while(num>0) {
        int lastDig = num%10;
        num = num/10;
        digSum = digSum + lastDig;
    }
    return digSum;
}
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The sum of digits are : "<<sumD(n);
    return 0;
}