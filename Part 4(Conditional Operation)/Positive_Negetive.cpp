// 1) Find positive and negetive.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n >= 0)
    {
        cout << n << " is Positive";
    }
    else
        cout << n << " is Negetive";
}