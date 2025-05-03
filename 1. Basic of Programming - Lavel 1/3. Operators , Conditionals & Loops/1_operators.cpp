#include<iostream>
using namespace std;

int main(){
    int a =10;
    int b = 5;

    // arithmatic
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a%b << endl;

    // relational 
    cout << "Relational Operator" << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    
    // assignment -> += -= *= /= %=

    // Logical -> $$ || !

    int c = 10;
    int d = 5;

    cout << (c++) * (d++) << endl; //50
    cout << (c++) * (++d) << endl; //77
    cout << (++c) * (d++) << endl; //91
    cout << (++c) * (++d) << endl; //126


    return 0;
}