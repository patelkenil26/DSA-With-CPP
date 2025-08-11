#include<iostream>
#include<algorithm>
using namespace std;

void sortZeroOne(int arr[] , int n){
    int zero=0;
    int one = 0;

    // counting
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            zero++;
        }else{
            one++;
        }
    }

    // insertion
    fill(arr,arr+zero,0);
    fill(arr+zero,arr+n,1);

    // int i=0;
    // for(;i<zero;i++){
    //     arr[i] = 0;
    // }
    // for(;i<n;i++){
    //     arr[i] = 1;
    // }
}

int main()
{
    int arr [] = {0,0,1,1,1,0,0,1,0,1,1,0,1};
    int size = 13;

    sortZeroOne(arr,size); //O(N)
    // sort(arr,arr+size);         //O(NlogN)
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}