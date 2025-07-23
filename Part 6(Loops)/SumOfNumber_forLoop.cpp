//2)Sum of numbers from 1 to n using for loop.

#include<iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cout<<"Enter the value : ";
    cin>>n;
    for(int i = 1;i<=n;i++) {
        sum = sum+i;
        if(i==5) {
            break;// break keyword: using for Stop the loop
        }
    }
    cout<<"Total sum is : "<<sum;
}