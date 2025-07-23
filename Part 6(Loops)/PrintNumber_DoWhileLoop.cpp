// 1)Print numbers 1 to 5 using do while loop.

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);
}