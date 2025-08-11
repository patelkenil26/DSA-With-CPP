#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A(int _val) : x(_val) {};

    int getX()
    {
        return x;
    }

    int setX(int _val)
    {
        x = _val;
    }
    friend class B;
    friend void print(const A &);
};

class B
{
public:
    void print(const A &a)
    {
        cout << "This function is inside the Class: " << a.x << endl;
    }
};

void print(const A &a)
{
    cout << "This function is outside Class: " << a.x << endl;
}

int main()
{
    A a(5);
    B b;
    b.print(a);
    print(50);
    return 0;
}