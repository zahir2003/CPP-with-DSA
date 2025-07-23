// 1)Print 10 stars in 5 line.

#include<iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i=1;i<=n;i++) {
        int m = 10;
        for(int j=1;j<=m;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}