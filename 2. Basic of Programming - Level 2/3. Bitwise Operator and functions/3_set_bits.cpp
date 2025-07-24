#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter number: ";
    cin >> n;
    cout << endl;
    int setBit = 0;
    while (n != 0)
    {
        int lastBit = (n & 1);
        if (lastBit == 1)
        {
            setBit = setBit+ 1;
        }
        n = n>>1;
    }

    cout << "total set bit is: " << setBit;

    return 0;
}