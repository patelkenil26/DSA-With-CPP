/*
268. Missing Number
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:
Input: nums = [3,0,1]
Output: 2
Explanation:
n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:
Input: nums = [0,1]
Output: 2
Explanation:
n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// Method 1:
int sortMethod(vector<int>&arr){
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++){
        if(arr[i] == i){
            continue;
        }else{
            return i;
        }
    }
    return arr.size();
}

// Method 2:
int xorMethod(vector<int>&arr){
    
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }

    int n = arr.size();
    for(int i=0;i<=n;i++){
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    vector<int>arr;
    arr.push_back(9);
    arr.push_back(6);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(0);
    arr.push_back(1);

    // arr.push_back(1);
    // arr.push_back(0);

    int ans  = sortMethod(arr);
    // int ans  = xorMethod(arr);
    cout << ans;
    return 0;
}