// 2) Binary to Decimal 

#include<iostream>
using namespace std;
int binTodec(int binNum) {
    int ans=0;
    int pow=1;
    while(binNum>0) {
        int rem = binNum%2;
        binNum = binNum/10;
        ans = ans+(rem*pow);
        pow = (pow*2);
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter a Binary number : ";
    cin>>n;
    cout<<"Decimal number is : "<<binTodec(n);
    return 0;
}