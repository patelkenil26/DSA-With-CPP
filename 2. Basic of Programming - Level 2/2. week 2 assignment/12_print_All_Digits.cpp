#include <iostream>
using namespace std;

void printAllDigits(int n){
    while (n)
    {
        int onePlaceDigits = n%10;
        cout << "Digit: " << onePlaceDigits << endl;
        n/=10;
    }
    
}

int main()
{
    int n;
    cout << "Enter number to see the digits: " << endl;
    cin >> n;
    printAllDigits(n);
    return 0;
}