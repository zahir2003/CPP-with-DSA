// 2)Sum of numbers from 1 to n using while loop.

#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int i = 1;
    cout << "Enter the number : ";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        if (i == 5)
        {
            break;
        }
        i++;
    }
    cout << "The total sum is : " << sum;
}