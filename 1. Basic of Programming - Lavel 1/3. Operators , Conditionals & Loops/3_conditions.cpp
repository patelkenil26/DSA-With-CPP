#include<iostream>
using namespace std;

int main()
{
    int a = 5;

    if(cin >> a)
    {
        cout << "This is cin a " << a <<endl;
    }

    if(cout <<  a)
    {
        cout << " This is cout a " << a << endl;
    }

    if(a > 10);
    {
        cout << "This is semicolumn a " << endl;
    }

    // a < 10 ? cout << a << "a is small" : cout << a << " a is big";
    cout << ((a < 10) ? "a is small" : "a is big");
    return 0;

  
}