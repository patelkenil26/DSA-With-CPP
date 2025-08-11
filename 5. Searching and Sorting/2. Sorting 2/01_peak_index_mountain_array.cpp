/*
852. Peak Index in a Mountain Array

You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.

Example 1:
Input: arr = [0,1,0]
Output: 1

Example 2:
Input: arr = [0,2,1,0]
Output: 1

Example 3:
Input: arr = [0,10,5,2]
Output: 1
*/


#include<iostream>
using namespace std;

int peakIndexMountainArray(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ansIndex = -1;
    while(s<=e){
        if(arr[mid] < arr[mid+1]){
            // Line A 
            s = mid +1;
        }else{
            ansIndex = mid;
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return  ansIndex;
    
}

int main()
{
    int arr[] = {0,1,0};
    int n = 3;
    int ans = peakIndexMountainArray(arr,n);
    cout << ans;
    return 0;
}