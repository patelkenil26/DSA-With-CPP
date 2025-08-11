#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    int age;
    string name;

private:
    string gf;

public:
    Student()
    {
        cout << "default constrictor" << endl;
    }

    Student(int id, int age, string name, string gf)
    {
        cout << "Student Parameterized Constructor is called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->gf = gf;
    }

    void sleep()
    {
        cout << this->name << "Sleep" << endl;
    }

    void study()
    {
        cout << this->name << "Study" << endl;
    }

    ~Student()
    {
        cout << "Destroctor is called" << endl;
    }

private:
    void gfName()
    {
        cout << this->gf << "is a GF" << endl;
    }
};

int main()
{
    Student A(1, 20, "Popatlal ", "Chakori");
    cout << A.age << endl;
    A.study();
    A.sleep();

    return 0;
}