#include <iostream>
using namespace std;

void solve(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 10;
    }
}
int main()
{
    int arr[5];
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        cout << "enter the value : " << i << endl;
        cin >> arr[i];
    }

    solve(arr, size);

    
    // print
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}