// 5) Triangle Pattern :
//     *
//     * *
//     * * *
//     * * * *
    //       or
    //    1
    //    2 2
    //    3 3 3
    //    4 4 4 4

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            //cout<<"*"<<" ";
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}