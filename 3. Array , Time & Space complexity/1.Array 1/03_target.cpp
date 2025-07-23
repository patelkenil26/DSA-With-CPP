#include <iostream>
using namespace std;

bool findTarget(int arr[], int size, int target)
{
    for (int i = size - 1; i > 0; i--)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int target;
    cout << "Enter the target: " << endl;
    cin >> target;
    bool ans = findTarget(arr, size, target);
    if (ans)
    {
        cout << "target found";
    }
    else
    {
        cout << "target not found";
    }

    return 0;
}