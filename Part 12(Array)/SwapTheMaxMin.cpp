// 10) WAF to swap the max & min number of an array.

#include<iostream>
using namespace std;
void swapNumber(int arr[],int size) {
    if(size<=1) {
        cout<<"Array size is too small to swap !!";
        return;
    }
    int maxIndex = 0;
    int minIndex = 0;
    for(int i=0;i<size;i++) {
        if(arr[i]>arr[maxIndex]) {
            maxIndex = i;
        } 
        if(arr[i]<arr[minIndex]) {
            minIndex = i;
        }
    }
     if (maxIndex == minIndex) {
        cout << "All elements are the same. No swapping needed!" << endl;
        return;
    }
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main() {
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    if(n<=0) {
        cout<<"Array size is too small to swap !!";
        return 1;
    }
    int arr[n];
    cout<<"Enter the "<<n<<" elements : \n";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Array before swapping : \n";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swapNumber(arr,n);
    cout<<"Array after swapping Max and Min is : \n";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}