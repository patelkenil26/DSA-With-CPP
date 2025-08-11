#include <iostream>
using namespace std;

#define PI 3.14159465
#define MAXX(x, y) (x > y ? x : y)

float circleArea(float r)
{
    return PI * r * r;
}

float circlePerimeter(float r)
{
    return 2 * PI * r;
}

void fun()
{
    int x = 6;
    int y = 8;
    // int c = x > y ? x : y;
    int c = MAXX(x, y);
    cout << c << endl;
}

int main()
{
    cout << "Area of Circle is: " << circleArea(3) << endl;
    cout << "Perimeter of Circle is: " << circlePerimeter(3) << endl;

    fun();
    return 0;
}