// 6) WAF to check if a number is Prime or not.

#include<iostream>
using namespace std;
int Prime(int n) {
    bool isPrime = true;
    for(int i=2;i<=n-1;i++) {
        if(n%i==0) {
            isPrime = false;
            break;
        } 
    } 
    if(isPrime==true) {
        cout<<n<<" is a Prime number"<<endl;
    } else {
        cout<<n<<" is not a Prime number"<<endl;
    }
    return 0;
}
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    Prime(n);
    return 0;
}