#include <iostream>
using namespace std;

void halfPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedHalfPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void diamond(int n)
{
    halfPyramid(n);
    invertedHalfPyramid(n);
}

int main()
{
    int n;
    cout << "enter number of rows : ";
    cin >> n;

    diamond(n);
    return 0;
}