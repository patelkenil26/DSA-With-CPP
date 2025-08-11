/*
658. Find K Closest Elements
Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or
|a - x| == |b - x| and a < b
 

Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3

Output: [1,2,3,4]

Example 2:

Input: arr = [1,1,2,3,4,5], k = 4, x = -1

Output: [1,1,2,3]
*/

class Solution {
public:

    int lowerBound(vector<int>&arr,int x){
        int start = 0;
        int end = arr.size()-1;
        int ans = end;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[mid] >= x){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }

    vector<int> bs_method(vector<int>& arr, int k, int x) {
        int h = lowerBound(arr,x);
        int l = h-1;
        while(k--){
            if(l<0){
                h++;
            }
            else if(h >= arr.size()){
                l--;
            }
            else if(x-arr[l] > arr[h]-x){
                h++;     
            }else {
                l--;
            }
        }
        return vector<int>(arr.begin()+l+1 , arr.begin()+h);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return bs_method(arr,k,x);
    }
};