// 2) Square Pattern : 
//      A B C D
//      A B C D
//      A B C D
//      A B C D

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=0;i<n;i++) {
        char ch = 'A';
        for(int j=0;j<n;j++) {
            cout<<ch<<" ";
            ch = ch+1;
        }
        cout<<endl;
    }
    return 0;
}