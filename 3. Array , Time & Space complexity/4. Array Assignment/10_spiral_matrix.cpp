/*
54. Spiral Matrix
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

*/

#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int total_element = row * col;
    vector<int> ans;
    int count = 0;

    int sR = 0;
    int sC = 0;
    int eR = row - 1;
    int eC = col - 1;

    while (count < total_element)
    {
        for (int i = sC; i <= eC && count < total_element; i++)
        {
            ans.push_back(matrix[sR][i]);
            count++;
        }
        sR++;

        for (int i = sR; i <= eR && count < total_element; i++)
        {
            ans.push_back(matrix[i][eC]);
            count++;
        }
        eC--;

        for (int i = eC; i >= sC && count < total_element; i--)
        {
            ans.push_back(matrix[eR][i]);
            count++;
        }
        eR--;

        for (int i = eR; i >= sR && count < total_element; i--)
        {
            ans.push_back(matrix[i][sC]);
            count++;
        }
        sC++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    spiralMatrix(arr);

    return 0;
}