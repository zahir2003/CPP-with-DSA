// Syntax - 3

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec(4,0);
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;
//     cout<<vec[2]<<endl;
//     cout<<vec[3]<<endl;
//     return 0;
// }


// for each loop :

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<char>vec={'a','b','c','d','e'};
//     for(char val: vec) {
//         cout<<val<<endl;
//     }
//     return 0;
// }


// Size function :

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec={1,2,3,4};
//     cout<<"Size : "<<vec.size()<<endl;
//     for(int val:vec) {
//         cout<<val<<endl;
//     }
//     return 0;
// }


// push_back function :

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec;
//     cout<<"Size before push back : "<<vec.size()<<endl;
//     vec.push_back(24);
//     vec.push_back(26);
//     vec.push_back(28);
//     cout<<"Size after push back : "<<vec.size()<<endl;
//     for(int val:vec) {
//         cout<<val<<endl;
//     }
//     return 0;
// }


// pop_back function : 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec={24,26,28,31};
//     cout<<"Size before pop back : "<<vec.size()<<endl;
//     vec.pop_back();
//     vec.pop_back();
//     vec.pop_back();
//     cout<<"Size after pop back : "<<vec.size()<<endl;
//     for(int val:vec) {
//         cout<<val<<endl;
//     }
//     return 0;
// }


// front function : 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec={24,26,28,31};
//     cout<<"The first value is : "<<vec.front()<<endl;
//     return 0;
// }


// back function :

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec={24,26,28,31};
//     cout<<"The last value is : "<<vec.back()<<endl;
//     return 0;
// }


// at function : 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec={24,26,28,31};
//     cout<<vec.at(0)<<endl;
//     cout<<vec.at(3)<<endl;
//     return 0;
// }


// size and capacity function : 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     cout<<"The size of the vector : "<<vec.size()<<endl;
//     cout<<"The capacity of the vector : "<<vec.capacity()<<endl;
//     return 0;
// }


// 1) Find the unique number.

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int>vec;
//     int n;
//     cout<<"Enter the no. of elements you wnat in the vector : ";
//     cin>>n;
//     cout<<"Enter "<<n<<" elements : ";
//     for(int i=0;i<n;i++) {
//         int value;
//         cin>>value;
//         vec.push_back(value);
//     }
//     cout<<"Elements of the vector are : "<<endl;
//     for(int i=0;i<vec.size();i++) {
//         cout<<"vec["<<i<<"] : "<<vec[i]<<endl;
//     }
//     int ans = 0;
//     for(int val:vec) {
//         ans = ans^val; // XOR each element with ans
//     }
//     cout<<"The unique element is : "<<ans;
//     return 0;
// }


// 2) Linear Search using vector.

#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec;
    int n;
    cout<<"Enter the no. of element : ";
    cin>>n;
    cout<<"Enter "<<n<<" elements : \n";
    for(int i=0;i<n;i++) {
        int value;
        cin>>value;
        vec.push_back(value);
    }
    cout<<"Elements of the vector are : "<<endl;
    for(int i=0;i<vec.size();i++) {
        cout<<"vec["<<i<<"] : "<<vec[i]<<endl;
    }
    int target;
    cout<<"Enter the target value : ";
    cin>>target;
    bool found = false;
    for(int i=0;i<vec.size();i++) {
        if(target==vec[i]) {
            cout<<"The target value is found at index : "<<i<<endl;
            found = true;
            break;
        }
    }
    if(!found) {
        cout<<"The target value is not present in the vector !"<<endl;
    }
    return 0;
}


// 3) Reverse code using function.

