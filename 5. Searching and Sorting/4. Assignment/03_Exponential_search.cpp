/*
Exponential Search

The name of this searching algorithm may be misleading as it works in O(Log n) time. The name comes from the way it searches an element.

Given a sorted array, and an element x to be searched, find position of x in the array.


Input:  arr[] = {10, 20, 40, 45, 55}
        x = 45
Output: Element found at index 3


Input:  arr[] = {10, 15, 25, 45, 55}
        x = 15
Output: Element found at index 1


We have discussed, linear search, binary search for this problem.

Exponential search involves two steps:  

Find range of indexes where element is present
Do Binary Search in above found range.

*/

#include<iostream>
#include<algorithm>
using namespace std;

int bs(int arr[],int start,int end,int target){
    while (start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(target>arr[mid]){
            start = mid +1;
        }else{
            end = mid-1;
        }
    }
    return -1;
    
}

int expSearch(int arr[],int size,int x){
    if(arr[0]==x){
        return 0;
    }
    int i =1;
    while(i<=size && arr[i] <= x){
        i = i*2;
    }
    return bs(arr,i/2,min(i,size-1),x);
}

int main()
{
    int arr[] = {3,4,5,6,11,13,14,15,56,57};
    int size = sizeof(arr)/sizeof(int) ;
    int x = 13;
    int ans = expSearch(arr,size,x);
    cout << ans << endl;
    return 0;
}