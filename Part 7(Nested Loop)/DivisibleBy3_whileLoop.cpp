// 2)Sum of all numbers from 1 to N which are divisible by 3 using while loop.

#include<iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    int i = 1;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The numbers which are divisible by 3 from 1 to "<<n<<" are : "<<endl;
    while(i<=n) {
        if(i%3==0) {
            cout<<i<<" "<<endl;
            sum = sum+i;
        }
        i++;
    } 
     cout<<"The total sum is : "<<sum;
}