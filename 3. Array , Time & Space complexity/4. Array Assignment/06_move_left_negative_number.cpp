/*
Questions: Move all nagative numbers to left side of an array

example 1:
arr[] = {1,2,-3,4,-5,6}
ans = {-5,-3,2,4,1,6}
*/

#include<iostream>
#include<algorithm>
using namespace std;

void moveAllNagativeToLeft(int *arr,int &n){

    // Duth National Flag Algo.
    int i =0;
    int j = n-1;
    while(i<j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }else{
            swap(arr[i],arr[j]);
        }
    }
}

int main()
{
    int arr[] = {1,2,-3,4,-5,6};
    int n = sizeof(arr)/sizeof(int);
    
    moveAllNagativeToLeft(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// T.C -> O(N)
// S.C -> O(1)