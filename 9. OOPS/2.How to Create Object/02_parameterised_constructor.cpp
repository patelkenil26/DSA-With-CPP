#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    int age;
    string name;

    Student(int id, int age, string name)
    {
        cout << "Parameterised Constructor" << endl;
        this->name = name;
        this->age = age;
        this->id = id;
    }

    void sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << " Bunking" << endl;
    }

    ~Student()
    {
        cout << "Student Destructor is called" << endl;
    }
};

int main()
{
    Student A(1,12,"kenil");
    Student B(2,13,"Smit");

    A.sleep();
    B.bunk();
    return 0;
}