/*724. Find Pivot Index

Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.

Example 1:
Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11

Example 2:
Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.

Example 3:
Input: nums = [2,1,-1]
Output: 0
Explanation:
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0*/

#include <iostream>
#include <vector>
using namespace std;

int bruteForce(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int leftSum = 0;
        int rightSum = 0;

        for (int j = 0; j < i; j++)
        {
            leftSum += arr[j];
        }

        for (int j = i + 1; j < n; j++)
        {
            rightSum += arr[j];
        }

        // cout << "index is: " << i << " left sum: " << leftSum << " right sum: " << rightSum << endl;

        if (leftSum == rightSum)
        {
            // cout << "sum is equal: "<< leftSum << " " << rightSum<< endl;
            // cout << i;
            return i;
        }
    }
    return -1;
}

int prefixSumApproach(vector<int> &arr)
{

    vector<int> lsum(arr.size(), 0);
    vector<int> rsum(arr.size(), 0);

    // lsum
    for (int i = 1; i < arr.size(); i++)
    {
        lsum[i] = lsum[i - 1] + arr[i - 1];
    }

    // rsum
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        rsum[i] = rsum[i + 1] + arr[i + 1];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (lsum[i] == rsum[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(6);

    // brute firce approach
    // int ans = bruteForce(arr, n);
    int ans = prefixSumApproach(arr);
    cout << ans;
}