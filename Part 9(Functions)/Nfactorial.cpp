// 3) Calculate N factorial.

#include<iostream>
using namespace std;
int fact(int n) {
    int sum = 1;
    for(int i=1;i<=n;i++) {
        sum = sum*i;
    }
    return sum;
}
int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The factorial is : "<<fact(n)<<endl;
    return 0;
}