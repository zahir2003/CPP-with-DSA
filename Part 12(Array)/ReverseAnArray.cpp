// 8) Reverse an Array.

#include <iostream>
using namespace std;
void reverseArr(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements: "<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    reverseArr(arr, size);
    cout << "The reverse of the array is: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}