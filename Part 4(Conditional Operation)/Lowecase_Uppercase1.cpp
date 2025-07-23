 // Find Character lowercase or uppercase.
    //(i) Method 1:

#include<iostream>
using namespace std;
int main() { 
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    if(ch<='z' && ch>='a') {
        cout<<ch<<" is lowercase";
    } else if(ch<='Z' && ch>='A') {
        cout<<ch<<" is uppercase";
    } else {
        cout<<"Please enter a valid character !!";
    }
}