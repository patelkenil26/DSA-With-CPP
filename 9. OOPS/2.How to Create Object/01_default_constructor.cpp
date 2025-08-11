#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    int age;
    string name;

    // ctor
    Student(){
        cout << "Default Constructor is called"<<endl;
    }

    void study(){
        cout << this->name << " Studing" <<endl;
    }

    void sleep(){
        cout << this->name << " Sleeping" << endl;
    }

    // dtor 
    ~Student(){
        cout << "Distructor called"<<endl;
    }
};

int main()
{
    Student A;
    A.id=1;
    A.age=15;
    A.name="kenil";
    A.study();
    A.sleep();

    Student B;
    B.name="Mehul";
    B.sleep();
    B.study();
    return 0;
}