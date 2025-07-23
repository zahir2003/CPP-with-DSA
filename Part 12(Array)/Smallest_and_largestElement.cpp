// 4) Find smallest and Largest element in an Array.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of an Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = INT16_MAX;
    int index1 = 0; // Declare index1 for smallest

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            index1 = i;
        }
    }

    cout << "The Smallest element is: " << smallest << " at index " << index1 << endl;

    int largest = INT16_MIN;
    int index2 = 0; // Declare index2 for largest

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            index2 = i;
        }
    }

    cout << "The Largest element is: " << largest << " at index " << index2 << endl;

    return 0;
}
