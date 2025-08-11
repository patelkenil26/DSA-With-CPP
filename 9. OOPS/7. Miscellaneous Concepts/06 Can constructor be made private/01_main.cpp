#include <iostream>
using namespace std;

class Box
{
    int width;
    Box(int _w) : width(_w) {}

public:
    int getBox()
    {
        return width;
    }

    int setBox(int _val)
    {
        width = _val;
    }
    friend class BoxFactory;
};

class BoxFactory
{
    int count;

public:
    Box getBoxCount(int _w)
    {
        count++;
        return Box(_w);
    }
};

int main()
{
    BoxFactory bfact;
    Box b = bfact.getBoxCount(5);
    cout << b.getBox() << endl;
    return 0;
}