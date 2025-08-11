#include <iostream>
using namespace std;

int findUniqueNumber(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 4, 3, 4, 1, 3, 1};
    int size = 7;

    int ans = findUniqueNumber(arr, size);
    cout << "Unique Number: " << ans << endl;
    return 0;
}