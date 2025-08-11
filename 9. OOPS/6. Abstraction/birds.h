#if !defined(MACRO)
#define MACRO
#include <iostream>
using namespace std;

class Bird
{
public:
    // this is interface
    virtual void eat() = 0; // pure virtual function
    virtual void fly() = 0;
    // classes that inherits this class has to implement pure virtual functions
};

class Sparrow : public Bird
{
public:
    void eat()
    {
        cout << "Sparrow is eating " << endl;
    }
    void fly()
    {
        cout << " Sparrow is flying" << endl;
    }
};

class Eagle : public Bird
{
public:
    void eat()
    {
        cout << "Eagle is eating " << endl;
    }
    void fly()
    {
        cout << " Eagle is flying" << endl;
    }
};

class Pegion : public Bird
{
public:
    void eat()
    {
        cout << "Pegion is eating " << endl;
    }
    void fly()
    {
        cout << " Pegion is flying" << endl;
    }
};

#endif // MACRO
