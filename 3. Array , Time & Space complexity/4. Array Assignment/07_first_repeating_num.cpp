/*GFG
First Repeating Element
Given an array arr[], find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

Note:- The position you return should be according to 1-based indexing. 

Examples:

Input: arr[] = [1, 5, 3, 4, 3, 5, 6]
Output: 2
Explanation: 5 appears twice and its first appearance is at index 2 which is less than 3 whose first the occurring index is 3.
Input: arr[] = [1, 2, 3, 4]
Output: -1
Explanation: All elements appear only once so answer is -1.
*/


#include<iostream>
#include <unordered_map>
using namespace std;

int firstRepeated(int arr[],int n){
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(hash[arr[i]]>1){
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,5,3,4,3,5,6};
    int n = 7;
    int ans = firstRepeated(arr,n);
    cout << ans;
    return 0;
}