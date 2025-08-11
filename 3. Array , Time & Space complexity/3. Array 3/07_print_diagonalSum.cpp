#include <iostream>
using namespace std;

void printDiagonalSum(int arr[][3], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + arr[i][i];

        // Print diagonal
        // cout << arr[i][i] << " ";
    }
    cout << "Sum is: " << sum << endl;
}

int main()
{
    int arr[3][3] = {{10, 20, 30},
                     {10, 40, 30},
                     {10, 20, 30}};

    int row = 3;
    int col = 3;

    printDiagonalSum(arr, row, col);

    return 0;
}