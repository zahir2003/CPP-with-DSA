// 2) Creation of an Array with user input.

#include<iostream>
using namespace std;
int main() {
    int n = 5;
    int marks[n];
    cout<<"Enter the elements : ";
    cin>>marks[0];
    cin>>marks[1];
    cin>>marks[2];
    cin>>marks[3];
    cin>>marks[4];
    cout<<"The marks are : ";
    cout<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<" " <<marks[4]<<" ";
    return 0;
}