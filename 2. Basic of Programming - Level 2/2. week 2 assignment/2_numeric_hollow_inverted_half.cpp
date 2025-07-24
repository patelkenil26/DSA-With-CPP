#include <iostream>
using namespace std;

void numericHolloInvertedwHalf(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (j == i + 1 || j == n || i == 0)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    numericHolloInvertedwHalf(n);
    return 0;
}