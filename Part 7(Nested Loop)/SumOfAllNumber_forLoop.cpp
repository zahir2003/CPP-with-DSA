// 2)Sum of all numbers from 1 to N which are divisible by 3 using for loop.

#include<iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The numbers which are divisible by 3 from 1 to "<<n<<" are : "<<endl;
    for(int i=1;i<=n;i++) {
        if(i%3==0) {
            cout<<i<<" "<<endl;
            sum = sum+i;
        }
    } 
     cout<<"The total sum is : "<<sum;
}