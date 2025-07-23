// 3)Print factorial of a number N using while loop.

#include<iostream>
using namespace std;
int main() {
    int n;
    int sum = 1;
    int i = 1;
    cout<<"Enter the number : ";
    cin>>n;
    while(i<=n) {
            sum = sum*i;
            i++;
    } 
     cout<<"The factorial of "<<n<<" is : "<<sum;

    return 0;
}