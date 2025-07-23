// 13) Pyramid Pattern :
//            1
//          1 2 1
//        1 2 3 2 1
//      1 2 3 4 3 2 1

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=0;i<n;i++) {
        //Spaces : n-i-1
        for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        // Nums1 : i+1
        for(int j=1;j<=i+1;j++) {
            cout<<j;
        }
        // Nums2 :
        for(int j=i;j>0;j--) {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
