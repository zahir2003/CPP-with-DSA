// 1) Pair sum problem : 


// (i) Brute Force Approach.

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int>pairSum(vector<int>nums, int target) {
//     vector<int>ans;
//     int n = nums.size();

//     for(int i=0;i<n;i++) {
//         for(int j=i;j<n;j++) {
//             if(nums[i]+nums[j]==target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int>vec;
//     int n;
//     cout<<"Enter the no. of element : ";
//     cin>>n;
//     cout<<"Enter "<<n<<" elements : \n";
//     for(int i=0;i<n;i++) {
//         int value;
//         cin>>value;
//         vec.push_back(value);
//     }
//     cout<<"Elements of the vector are : "<<endl;
//     for(int i=0;i<vec.size();i++) {
//         cout<<"vec["<<i<<"] : "<<vec[i]<<endl;
//     }
//     int target;
//     cout<<"Enter the target value : ";
//     cin>>target;
//     vector<int>ans=pairSum(vec,target);
//     if (ans.size() >= 2) {
//         cout << "Indices of the pair are: " << ans[0] << ", " << ans[1] << endl;
//     } else {
//         cout << "No pair found with the given target." << endl;
//     }
//     return 0;
// }


// (ii) Optimized Approach.

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int>pairSum(vector<int>nums, int target) {
//     vector<int>ans;
//     int n = nums.size();
//     int i = 0,j = n-1;
//     while(i < j) {
//         int pairSum = nums[i]+nums[j];
//         if(pairSum > target) {
//             j--;
//         } else if(pairSum < target) {
//             i++;
//         } else {
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int>vec;
//     int n;
//     cout<<"Enter the no. of element : ";
//     cin>>n;
//     cout<<"Enter "<<n<<" elements : \n";
//     for(int i=0;i<n;i++) {
//         int value;
//         cin>>value;
//         vec.push_back(value);
//     }
//     cout<<"Elements of the vector are : "<<endl;
//     for(int i=0;i<vec.size();i++) {
//         cout<<"vec["<<i<<"] : "<<vec[i]<<endl;
//     }
//     int target;
//     cout<<"Enter the target value : ";
//     cin>>target;
//     vector<int>ans=pairSum(vec,target);
//     if (ans.size() >= 2) {
//         cout << "Indices of the pair are: " << ans[0] << ", " << ans[1] << endl;
//     } else {
//         cout << "No pair found with the given target." << endl;
//     }
//     return 0;
// }


// 2) Majority Element problem.


// (i) Brute Force Approach.

// #include<iostream>
// #include<vector>
// using namespace std;
// int majorityElement(vector<int>nums) {
//     int n=nums.size();
//     for(int val:nums) {
//         int freq = 0;
//         for(int el:nums) {
//             if(el==val) {
//                 freq++;
//             }
//         }
//         if(freq>n/2) {
//             return val;
//         }
//     }
//     return -1;
// }
// int main() {
//     vector<int>vec;
//     int n;
//     cout<<"Enter the no. of element : ";
//     cin>>n;
//     cout<<"Enter "<<n<<" elements : \n";
//     for(int i=0;i<n;i++) {
//         int value;
//         cin>>value;
//         vec.push_back(value);
//     }
//     cout<<"Elements of the vector are : "<<endl;
//     for(int i=0;i<vec.size();i++) {
//         cout<<"vec["<<i<<"] : "<<vec[i]<<endl;
//     }
//     int ans=majorityElement(vec);
//    if (ans != -1) {
//         cout << "The Majority element is: " << ans << endl;
//     } else {
//         cout << "No Majority element found." << endl;
//     }
//     return 0;
// }


// (ii) Optimize Approach.

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int majorityElement(vector<int>nums) {
//     int n=nums.size();
//     for (int val : nums) {  
//         int freq = 0;
//         for (int el : nums) {  
//             if (el == val) {
//                 freq++;
//             }
//         }
//         if (freq > n / 2) {  
//             return val;      
//         }
//     }
//     return -1;  
// }
// int main() {
//     vector<int>vec;
//     int n;
//     cout<<"Enter the no. of element : ";
//     cin>>n;
//     cout<<"Enter "<<n<<" elements : \n";
//     for(int i=0;i<n;i++) {
//         int value;
//         cin>>value;
//         vec.push_back(value);
//     }
//     cout<<"Elements of the vector are : "<<endl;
//     for(int i=0;i<vec.size();i++) {
//         cout<<"vec["<<i<<"] : "<<vec[i]<<endl;
//     }
//     int ans=majorityElement(vec);
//    if (ans != -1) {
//         cout << "The Majority element is: " << ans << endl;
//     } else {
//         cout << "No Majority element found." << endl;
//     }
//     return 0;
// }


// (iii) Moore's Voting Algorithm.

#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>nums) {
    int n=nums.size();
    int freq = 0;
    int ans = 0;
    for(int i=0;i<nums.size();i++) {
        if(freq == 0) {
            ans = nums[i];
        }
        if(ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}
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
    int ans=majorityElement(vec);
   if (ans != -1) {
        cout << "The Majority element is: " << ans << endl;
    } else {
        cout << "No Majority element found." << endl;
    }
    return 0;
}