/*
75. Sort Colors
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]
*/


// Three Pointer Approache

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sortColor(vector<int> &nums)
{
    int l = 0;
    int m = 0;
    int h = nums.size() - 1;

    while (m <= h)
    {
        if (nums[m] == 0)
        {
            swap(nums[l], nums[m]);
            l++;
            m++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
}

int main()
{
    vector<int> nums;

    // example 1:
    // nums.push_back(2);
    // nums.push_back(0);
    // nums.push_back(2);
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(0);

    // example 2:
    // nums.push_back(2);
    // nums.push_back(0);
    // nums.push_back(1);

    // example 3:
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(1);

    sortColor(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}