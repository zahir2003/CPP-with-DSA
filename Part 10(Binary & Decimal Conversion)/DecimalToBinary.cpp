// 1) Decimal to Binary.

#include<iostream>
using namespace std;
int decToBinary(int decnum) {
    int ans=0;
    int pow=1;
    while(decnum>0) {
        int rem = decnum%2;
        decnum = decnum/2;
        ans = ans+(rem*pow);
        pow = (pow*10);
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The binary number is : "<<decToBinary(n);
    return 0;
}