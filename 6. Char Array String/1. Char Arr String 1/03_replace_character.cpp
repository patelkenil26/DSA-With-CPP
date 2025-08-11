#include <iostream>
using namespace std;

void replaceCharacter(int originalChar, int newChar, char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == originalChar)
        {
            arr[i] = newChar;
        }
    }
}

int main()
{
    char arr[100];
    cout << "enter character: " << endl;
    cin >> arr;
    replaceCharacter('@', ' ', arr, 100);
    cout << arr <<endl;
    return 0;
}