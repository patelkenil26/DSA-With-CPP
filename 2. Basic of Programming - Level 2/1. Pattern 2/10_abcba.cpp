#include <iostream>
using namespace std;

void abcBA(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' - 1;
        for (int j = 0; j < i + 1; j++)
        {
            ch++;
            cout << ch;
        }

        ch--;
        while (ch > 'A')
        {
            ch--;
            cout << ch;
        }

        cout << endl;
    }
}

int main()
{
    int ch;
    cout << "enter the no of rows ";
    cin >> ch;

    abcBA(ch);
    return 0;
}