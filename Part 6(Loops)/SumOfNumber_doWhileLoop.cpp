// 2)Sum of numbers from 1 to n using do while loop.

#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);
    cout << "The total sum is : " << sum;
}