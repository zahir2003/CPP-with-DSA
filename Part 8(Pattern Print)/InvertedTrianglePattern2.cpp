//  12) Inverted Triangle Pattern :
//       A A A A
//         B B B
//           C C 
//             D 

#include<iostream>
using namespace std;
int main() {
    int n;
    char ch='A';
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=0;i<n;i++) {
        // for space
        for(int j=0;j<i;j++) {
            cout<<" ";
        }
        // for letter
        for(int j=0;j<n-i;j++) {
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
} 