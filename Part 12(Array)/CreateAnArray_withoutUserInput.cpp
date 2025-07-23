// 1) Creation of an array without user input.

#include<iostream>
using namespace std;
int main() {
    int marks[5] = {34,65,76,87,98};
    marks[0] = {10};
    cout<<"Size of Array is : "<<sizeof(marks)<<endl;
    cout<<"The number of Array is : "<<sizeof(marks)/sizeof(int)<<endl;
    cout<<"The marks are : "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4];
    return 0;
}