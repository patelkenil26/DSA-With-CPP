/*
Allocate Minimum Pages
You are given an array arr[] of integers, where each element arr[i] represents the number of pages in the ith book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:

Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

Examples:

Input: arr[] = [12, 34, 67, 90], k = 2
Output: 113

Explanation: Allocation can be done in following ways:
[12] and [34, 67, 90] Maximum Pages = 191
[12, 34] and [67, 90] Maximum Pages = 157
[12, 34, 67] and [90] Maximum Pages = 113.
Therefore, the minimum of these cases is 113, which is selected as the output.

Input: arr[] = [15, 17, 20], k = 5
Output: -1

Explanation: Allocation can not be done.


Input: arr[] = [22, 23, 67], k = 1
Output: 112
*/

#include<iostream>
#include<numeric>
using namespace std;

bool isPossibleSolution(int arr[],int n ,int m ,int mid){
    int pageSum = 0;
    int c =1;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(pageSum + arr[i] > mid){
            c++;
            pageSum = arr[i];
            if(c>m){
                return false;
            }
        }
        else{
                pageSum += arr[i];
            }
        return true;
    }
}

int findPages(int arr[],int n,int m){
    if(m>n){
        return 1;
    }
    
    int start = 0 ;
    int end = accumulate(arr,arr+n,0);
    int ans = -1;

    while (start<=end)
    {
        int mid = (start+end)/2;
        if(isPossibleSolution(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
    
}

int main()
{
    int arr[] = {12, 34, 67, 90};
    int n = 4; 
    int m =3;
    int ansfinal = findPages(arr,n,m);
    cout << ansfinal << endl;
    return 0;
}