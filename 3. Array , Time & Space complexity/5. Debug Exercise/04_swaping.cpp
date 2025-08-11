#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    int n = 4;
    swapAlternate(arr,n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}