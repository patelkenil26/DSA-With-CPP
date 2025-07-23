#include <iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[], int size)
{
    int maxANS = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxANS = max(maxANS, arr[i]);
    }
    return maxANS;
}

int main()
{
    int arr[5] = {10, 80, 30, 140, 50};
    int size = 5;
    cout << "max is: " << findMax(arr, size);
    return 0;
}