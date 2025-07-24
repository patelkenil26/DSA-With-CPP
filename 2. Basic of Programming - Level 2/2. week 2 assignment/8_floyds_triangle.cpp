#include <iostream>
using namespace std;

void numericHollowHalf(int n)
{
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    numericHollowHalf(n);
    return 0;
}