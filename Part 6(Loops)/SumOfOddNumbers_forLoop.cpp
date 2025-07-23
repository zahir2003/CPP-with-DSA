//3)Sum of all odd numbers from 1 to n using for loop.

#include<iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The Odd numbers are : "<<endl;
    for(int i=1;i<=n;i++) {
        if(i%2!=0) {
            cout<<i<<" "<<endl;
            sum = sum+i;
        }
    }
    cout<<"The total sum of all odd numbers are : "<<sum;
}