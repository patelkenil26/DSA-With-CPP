#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        // int mid = (low + high) / 2;

        int mid = low + (high - low) / 2;

        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
    }
    // agar main yaha pohoch gya
    // iska mtlb elemnt nahi mial
    // noit found -> return -1;
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 45, 56, 78, 89, 90};
    int target = 33;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = binarySearch(arr, 0, n - 1, target);
    cout << ans;
    return 0;
}