// 10) Floyd's Triangle Pattern :
//       A 
//       B C 
//       D E F 
//       G H I J 

#include<iostream>
using namespace std;
int main() {
    int n;
    char ch='A';
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i+1;j++) {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}