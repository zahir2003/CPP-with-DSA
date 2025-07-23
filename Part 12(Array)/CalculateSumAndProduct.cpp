// 9) WAF to calculate sum & product of all numbers in an array.

#include<iostream>
using namespace std;
void calculate(int arr[],int size,int &sum,int &product) {
    sum = 0;
    product = 1;
    for(int i=0;i<size;i++) {
        sum = sum+arr[i];
        product = product*arr[i];
    }
}
int main() {
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    if(n<=0) {
        cout<<"The array is empty..!!";
        return 1;
    }
    int arr[n];
    cout<<"Enter the "<<n<<" elements : \n";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int sum = 0;
    int product = 1;
    calculate(arr,n,sum,product);
    cout<<"Sum of elements : "<<sum<<endl;
    cout<<"Product of elements : "<<product<<endl;
    return 0;
}