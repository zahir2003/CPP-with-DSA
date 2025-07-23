// 1) Minimum of two number 

#include<iostream>
using namespace std;
int minOfTwo(int a,int b) { // Parameters
    if(a<b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int a,b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    cout<<"Minimum is : "<<minOfTwo(a,b)<<endl; // Arguments
    return 0;
}