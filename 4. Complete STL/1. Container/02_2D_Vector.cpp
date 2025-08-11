#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 2D Array/Vector
    vector<vector<int>> arr(5, vector<int>(4, 0));
    int totalRows = arr.size();
    int totalColumn = arr[0].size();
    // 2d array created
    // with 5 rows
    // with 4 columns
    // with initial value of each cell is "0"

    vector<vector<int>> arr1(4);
    arr1[0] = vector<int>(4);
    arr1[1] = vector<int>(2);
    arr1[2] = vector<int>(5);
    arr1[3] = vector<int>(3);

    int totalRow = arr1.size();
    int totalCol = arr1[i].size();

    return 0;
}