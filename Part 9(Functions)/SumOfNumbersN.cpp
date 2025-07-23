// 2) Calculate sum of numbers from 1 to N.

#include<iostream>
using namespace std;
int calSum(int n) {
    int sum=0;
    for(int i=1;i<=n;i++) {
        sum = sum+i;
    }
    return sum;
}
int main() {
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"The total sum is : "<<calSum(a)<<endl;
    return 0;
}