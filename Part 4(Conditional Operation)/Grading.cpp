// 4) Grading system.

#include<iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;
    if(marks<=100 && marks>=90) {
        cout<<"Grade is A";
    } else if(marks<90 && marks>=80) {
        cout<<"Grade is B";
    } else if(marks<80 && marks>=30) {
        cout<<"Grade is C";
    } else if(marks<30) {
        cout<<"Fail !!";
    } else {
        cout<<"Please enter a valid number !!";
    }
}