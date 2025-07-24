#include <iostream>
using namespace std;

bool checkPrimeNumber(int n)
{
    int i = 2;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    bool isPrime = checkPrimeNumber(n);
    if (isPrime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not a Prime" << endl;
    }
}