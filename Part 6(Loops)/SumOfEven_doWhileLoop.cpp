// 4)Sum of all even numbers from 1 to n using do while loop.

#include<iostream>
using namespace std;
int main() {
    int n;
    int i = 1;
    int sum = 0;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The Even numbers are : "<<endl;
    do{
        if(i%2==0) {
            cout<<i<<endl;
            sum = sum+i;
        }
        i++;
    } while(i<=n);
    cout<<"The total sum of all even number is : "<<sum;
}