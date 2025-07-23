// 11) Inverted Triangle Pattern :
//       1 1 1 1
//         2 2 2
//           3 3
//             4

 #include<iostream>
 using namespace std;
 int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=0;i<n;i++) {
        // For space
        for(int j=0;j<i;j++) {
            cout<<" ";
        }
        // For number
        for(int j=0;j<n-i;j++) {
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
 } 