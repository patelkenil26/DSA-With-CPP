#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    int age;
    string name;

private:
    string gf;

public:
    void setAge(int a)
    {
        this->age = a;
    }

    int getAge()
    {
        return this->age;
    }

    string getGF()
    {
        return this->gf;
    }

    string getName()
    {
        return this->name;
    }

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
    // cout << A.age << endl;
    // A.setAge(24);

    cout << "Age is: " << A.getAge() << endl;
    cout << "Gf Name is: " << A.getGF() << endl;
    // A.sleep();
    cout << "Name is : " << A.getName() << endl;

    return 0;
}