#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {4, 3, 8, 9, 10};
    int n = 5;
    int target = 10;
    bool ans = linearSearch(arr, n, target);
    if (ans)
    {
        cout << "target Found";
    }
    else
    {
        cout << "target Not Found";
    }
    return 0;
}