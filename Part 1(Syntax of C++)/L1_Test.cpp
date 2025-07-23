#include<iostream>
using namespace std;
int main()
{
    int a = 23;
    char grade = 'A';
    char grade1 = 'a';
    float PI = 3.14;
    bool isSafe = true;
    bool issafe = false;
    double c = 484.66;

    // Typecasting(Conversion): It is implicit.It is done by the compiler.
    int value = grade;
    int value1 = grade1;

    // Typecasting(Casting):It is explicit.It is done by the programmer.
    int c1 = int(c);

    cout<<"Adamas University"<<endl<<"Zahir"<<endl;
    cout<<"A value is : "<<a<<endl;
    cout<<"Grade is : "<<grade<<endl;
    cout<<"ASCII value of A is :"<<value<<endl;
    cout<<"ASCII value of a is :"<<value1<<endl;
    cout<<"Boolean value for true is :"<<isSafe<<endl;
    cout<<"Boolean value for false is :"<<issafe<<endl;
    cout<<"C value in double is : "<<c<<endl;
    cout<<"C value in integer is : "<<c1<<endl;
    cout<<"Size of integer is :"<<sizeof(a)<<endl;
    cout<<"Size of character is :"<<sizeof(grade)<<endl;
    cout<<"Size of float is :"<<sizeof(PI)<<endl;
    cout<<"Size of boolean is :"<<sizeof(isSafe)<<endl;
    cout<<"Size of double is :"<<sizeof(c)<<endl;
    return 0; 
}
