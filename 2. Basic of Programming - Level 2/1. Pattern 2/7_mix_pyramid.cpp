#include <iostream>
using namespace std;

void invertedMixPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {

        // I star
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }

        // II spaces
        for (int j = 2 * n - 2 * i - 1; j > 0; j--)
        {
            cout << " ";
        }

        // III star
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void mixPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // I star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // II spaces
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " ";
        }

        // III star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    mixPyramid(n);
    invertedMixPyramid(n);
    return 0;
}