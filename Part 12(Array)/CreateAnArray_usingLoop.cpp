// 3) Creation of an Array using loop.

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int marks[n];
    cout<<"Enter "<<n<<" marks : \n";
    for(int i=0;i<n;i++) {
        cin>>marks[i];
    }
    cout<<"The Marks are : ";
    for(int i=0;i<n;i++) {
        cout<<marks[i]<<" ";
    }
    return 0;
}