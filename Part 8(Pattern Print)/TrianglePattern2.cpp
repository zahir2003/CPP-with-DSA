// 6) Triangle Pattern :
//      A
//      B B 
//      C C C 
//      D D D D 

#include<iostream>
using namespace std;
int main() {
    int n;
    char ch='A';
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i+1;j++) {
            cout<<ch<<" ";
        }
        ch=ch+1;
        cout<<endl;
    }
    return 0;
}