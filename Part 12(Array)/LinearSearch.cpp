// 7) Linear Search.

#include<iostream>
using namespace std;
int linearS(int arr[],int size,int target) {
    for(int i=0;i<size;i++) {
        if(arr[i]==target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int size =7;
    int target;
    cout<<"Enter the target number : ";
    cin>>target;
    cout<<"The Target index is : "<<linearS(arr,size,target);
    return 0;
}