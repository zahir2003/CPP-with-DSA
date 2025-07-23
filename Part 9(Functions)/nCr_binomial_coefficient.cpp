// 5) Calculate nCr binomial coefficient for n & r.

#include<iostream>
using namespace std;
int factorial(int n) {
    int fact=1;
    for(int i=1;i<=n;i++) {
        fact *= i;
    }
    return fact;
}
int nCr(int n,int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int nmr = factorial(n-r);

    return fact_n/(fact_r * nmr);
}
int main() {
    int a,b;
    cout<<"Enter n : ";
    cin>>a;
    cout<<"Enter r : ";
    cin>>b;
    cout<<"The answer is : "<<nCr(a,b);
    return 0;
}