#include<iostream>
using namespace std;

void printTriplets(int arr[] , int n ){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {10,20,30,40};
    int size = 4;
    printTriplets(arr,size);
    return 0;
}