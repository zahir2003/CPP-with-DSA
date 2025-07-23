// 1) Subarray.

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int n=5;
//     int arr[5] = {1,2,3,4,5};
//     for(int st=0;st<n;st++) {
//         for(int ed=st;ed<n;ed++) {
//             for(int i=st;i<=ed;i++) {
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 2) Maximum subarray sum (Brute Force Approach).

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter the size of the array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the "<<n<<" elements : ";
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     cout<<"The array element is : ";
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     int maxSum = INT16_MIN;
//     for(int st=0;st<n;st++) {
//         int curSum = 0;
//         for(int end=st;end<n;end++) {
//             curSum = curSum+arr[end];
//             maxSum = max(curSum,maxSum);
//         }
//     }
//     cout<<endl;
//     cout<<"Maximum subarray sum is : "<<maxSum<<endl;
//     return 0;
// }


// 3) Maximum Subarray sum using Kadane's Algorithm.

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements : ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"The array element is : ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    int maxSum = INT16_MIN;
    int curSum = 0;
        for(int i=0;i<n;i++) {
            curSum = curSum+arr[i];
            maxSum = max(curSum,maxSum);
            if(curSum<0) {
                curSum = 0;
            }
        }
    cout<<endl;
    cout<<"Maximum subarray sum is : "<<maxSum<<endl;
    return 0;
}