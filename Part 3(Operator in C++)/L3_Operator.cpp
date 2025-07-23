#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;

    // Arithmetic Operator: +,-,*,/,%
    cout<<"Addition is : "<<(a+b)<<endl;
    cout<<"Subtraction is : "<<(a-b)<<endl;
    cout<<"Multiplication is : "<<(a*b)<<endl;
    cout<<"Division is : "<<(a/b)<<endl;
    cout<<"Remainder is : "<<(a%(int)b)<<endl; //Typecasting(from float to int)

    // Relational Operator:>,<,>=,<=,==,!=
    cout<<(3<5)<<endl; //true->1
    cout<<(3>5)<<endl; //false->0
    cout<<(3<=3)<<endl; //true->1
    cout<<(2==2)<<endl; //true->1
    cout<<(2==3)<<endl; //false->0
    cout<<(2!=3)<<endl; //true->1
    cout<<(3!=3)<<endl; //false->0

    // Logical Operator: OR(||),AND(&&),NOT(!)
    cout<<!(3<5)<<endl; //(Logical NOT) false->0
    cout<<((3<5)||(5<3))<<endl; //(Logical OR)true->1
    cout<<((6<5)||(5<3))<<endl; //(Logical OR)false->0
    cout<<((3<5)&&(2<3))<<endl; //(Logical AND)true->1
    cout<<((3<5)&&(5<3))<<endl; //(Logical AND)false->0

    // Unary Operator: Incement(++),Decrement(--)
    int c = 10;
    int d = c++;
    int e = 15;
    int f = ++e;
    int g = 20;
    int h = g--;
    int i = 25;
    int j = --i;
     
    cout<<"d is : "<<d<<endl; //10
    cout<<"c is : "<<c<<endl; //11
    cout<<"e is : "<<e<<endl; //16
    cout<<"f is : "<<f<<endl; //16
    cout<<"h is : "<<h<<endl; //20
    cout<<"g is : "<<g<<endl; //19
    cout<<"i is : "<<i<<endl; //24
    cout<<"j is : "<<j<<endl; //24

    return 0;

}