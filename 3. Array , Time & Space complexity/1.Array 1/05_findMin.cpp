#include <iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[], int size)
{
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        minAns = min(minAns, arr[i]);
    }
    return minAns;
}

int main()
{
    int arr[5] = {10, 20, 30, 4, 50};
    int size = 5;
    cout << "Min is : " << findMin(arr, size);
    return 0;
}