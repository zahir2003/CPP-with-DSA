// 9) Floyd's Triangle Pattern :
//        1
//        2 3
//        4 5 6
//        7 8 9 10

#include<iostream>
using namespace std;
int main() {
    int n;
    int num=1;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
             cout<<num<<" ";
             num++;
        }
        cout<<endl;
    }
    return 0;
}