/*
179. Largest Number
Solved
Medium
Topics
premium lock icon
Companies
Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.



Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"


Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 109
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static bool cmp(string a, string b)
{
    string s1 = a + b;
    string s2 = b + a;
    return s1 > s2;
}

string largestNumber(vector<int> &nums)
{
    vector<string> snums;
    for (auto n : nums)
    {
        snums.push_back(to_string(n));
    }

    sort(snums.begin(), snums.end(), cmp);
    string s = "";
    for (auto str : snums)
    {
        s = s + str;
    }
    return s;
}

int main()
{
    // vector<int> nums = {10, 2 };
    vector<int> nums = {3, 30, 34, 5, 9};
    cout << largestNumber(nums);
    return 0;
}