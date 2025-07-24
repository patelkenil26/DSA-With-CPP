#include<iostream>
using namespace std;


float kmToMiles(float KM){
    float _1KmMiles = 0.621371;
    float miles = KM * _1KmMiles;
    return miles;
}
int main()
{
    float KM;
    cout << "Enter KM: "<<endl;
    cin >> KM;
    float miles = kmToMiles(KM);
    cout << "Miles: "<<miles << endl;
    return 0;
}