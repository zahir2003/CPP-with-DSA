// Find Character lowercase or uppercase.
//(ii) Method 2:

#include<iostream>
using namespace std;
int main() 
{
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    if(ch<=123 && ch>=97) {
        cout<<ch<<" is lowercase";
    } else if(ch<=90 && ch>=65) {
        cout<<ch<<" is uppercase";
    } else {
        cout<<"Please enter a valid character !!";
    }

    return 0;
}