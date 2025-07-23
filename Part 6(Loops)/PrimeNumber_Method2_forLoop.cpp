// 5) Check a number is prime or not using for loop.

#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isPrime = true;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            isPrime = false;
            break;
        } 
    } 
    if(isPrime==true) {
        cout<<n<<" is a Prime number";
    } else {
        cout<<n<<" is not a Prime number";
    }

    return 0; 
}