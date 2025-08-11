#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    int age;
    string name;

    Student(int id,int age,string name){
        this->id = id;
        this->age = age;
        this->name= name;
    }


    Student(const Student &srcobj)
    {
        cout << "this is copy constructor" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
    }

    void sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << " bunk the class " << endl;
    }

    ~Student()
    {
        cout << "Destructor is called" << endl;
    }
};
int main()
{
    Student A(1, 12, "Kenil");
    Student B(2, 15, "Rohan");
    Student C(3, 16, "Tiwari");
    A.sleep();
    B.bunk();

    Student D=A;
    D.bunk();

    return 0;
}