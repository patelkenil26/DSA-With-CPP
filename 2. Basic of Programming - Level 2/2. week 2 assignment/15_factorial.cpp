#include <iostream>
using namespace std;

void findFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    cout << "factorial is: " << fact;
}

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    findFactorial(n);
    return 0;
}