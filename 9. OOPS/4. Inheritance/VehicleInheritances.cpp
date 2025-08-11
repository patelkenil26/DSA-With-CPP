#include <iostream>
using namespace std;

class Vehicle
{
private:
    string name;
    string model;
    int noOfTyres;

public:
    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return this->name;
    }
    Vehicle(string name, string model, int noOfTyres)
    {
        cout << "I am inside Vehicle Ctor" << endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }

    void start_engine()
    {
        cout << "Engine is Started " << name << endl;
    }

    void stop_engine()
    {
        cout << "Engine is Stope " << name << endl;
    }

    ~Vehicle()
    {
        cout << "I am Inside Vehicle dtor" << endl;
    }
};

class Car : public Vehicle
{
protected:
    int noOfDoors;
    string transmissionType;

public:
    Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres)
    {
        cout << "I am inside Car Ctor" << endl;
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
    }

    void startAc()
    {
        cout << "AC has Started of " << getName() << endl;
    }

    ~Car()
    {
        cout << "I am inside Car Ctor" << endl;
    }
};

class MoterCycle : public Vehicle
{
protected:
    string handleBarStyle;
    string suspensionType;

public:
    MoterCycle(string name, string model, int noOfTyres, string handleBarStyle, string suspensionType) : Vehicle(name, model, noOfTyres)
    {
        cout << "I am inside MoterCycle Ctor" << endl;
        this->handleBarStyle = handleBarStyle;
        this->suspensionType = suspensionType;
    }
    void wheelie()
    {
        cout << "wheelie kar rahi hai" << getName() << endl;
    }

    ~MoterCycle()
    {
        cout << "I am inside MoterCycle dtor" << endl;
    }
};

int main()
{
    Car A("Maruti Suzuki", "VXI", 4, 4, "Manual");
    A.start_engine();
    A.startAc();
    A.stop_engine();
    // A.setName("BMW");
    // A.start_engine();
    // A.startAc();
    // A.stop_engine();
    cout << A.getName()<<endl;

    MoterCycle M("XUV","700",4,"U","Automated");
    M.start_engine();
    M.wheelie();
    M.stop_engine();
    return 0;
}