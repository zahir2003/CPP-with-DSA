//3)Sum of all odd numbers from 1 to n using while loop.

#include<iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    int i = 1;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The Odd numbers are : "<<endl;
    while(i<=n) {
        if(i%2!=0) {
            cout<<i<<endl;
            sum = sum+i;
        }
        i++;
    }
    cout<<"The total sum of all odd numbers are : "<<sum;
}