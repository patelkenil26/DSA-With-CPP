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

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findMissingNumber(vector<int> arr, int &ansIndex)
{
    sort(arr.begin(), arr.end());
    int s = 0;
    int n = arr.size();
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int number = arr[mid];
        int index = mid;
        int diff = number - index;

        if (diff == 0)
        {
            s = mid + 1;
        }

        if (diff == 1)
        {
            ansIndex = mid;
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    if(ansIndex==-1){
        ansIndex = n;        
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(9);
    arr.push_back(6);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(0);
    arr.push_back(1);
    int ansIndex = -1;
    findMissingNumber(arr, ansIndex);
    cout << "Missing Number: " << ansIndex << endl;
    return 0;
}