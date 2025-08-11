#include <iostream>
using namespace std;

void fancy12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << i + 1;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    n--;
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << i + 1;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << " enter no of rows: ";
    cin >> n;

    fancy12(n);
    return 0;
}