#include <iostream>
using namespace std;

// class abc{
// public:
//     int x, y;
//     void print() const{
//         // cout << x << " " << y << endl;
//         cout << this->x << " " << this->y << endl; //means same as above line
//     }
// };

class abc
{
public:
    static int x, y;

    static void print()
    {
        printf("I am in static %s\n", __FUNCTION__);
        cout << x << " " << y << endl;
    }
};

// static member ko Class ke bahar initialize kiya jata hai
// Syntex :
// variableType className :: staticMemberName
int abc::x;
int abc::y;

int main()
{
    abc a;
    abc::x = 1;
    // a.x = 2; // same as above line

    /* STATIC : Static member aur function ko call karne ke liye object banane ki need nahi hoti ,
                usko className::variableName/functionName se bhi call kiya jata hai main function me se*/

    // obj1.y = 2;
    abc::y = 2;
    // obj1.print();
    abc::print();
    abc obj2;
    // obj2.x = 10;
    abc::x = 10;
    // obj2.y = 20;
    abc::y = 20;

    // obj1.print();
    // obj2.print();
    abc::print();
    // a.y =3; // same as above line
    a.print();
    return 0;
}