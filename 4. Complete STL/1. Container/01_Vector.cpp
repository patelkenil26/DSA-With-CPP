#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    cout << *(v.begin()) << endl;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Size: " << v.size() << endl;

    v.pop_back();

    cout << "Size: " << v.size() << endl;

    cout << "Front Element: " << v.front() << endl; // front element of vector access thase
    cout << "Back Element: " << v.back() << endl;   // last element of vector access thase

    // chek if vector is empty or not
    if (v.empty() == true)
    {
        cout << "Vector is empty" << endl;
    }
    else
    {
        cout << "Vector is not empty" << endl;
    }

    cout << v[0] << endl;
    v[0] = 100;
    cout << v[0] << endl; // aa squeare bracket lagava mate ek condition chhe --->>>  k je index par square bracket lagavavo hoy te block vector ma exist karvo joi ye
                          // --->>> vector ni size define thayeli hovi joiye

    vector<int> age;
    // cout << age[0]<<endl; // ye error dega kyuki abhi age empty hai

    vector<int> dob(10);
    cout << dob[0] << endl;

    // square bracket jevi same method chhe at --> at thi bi element ne access kari shakay chhe
    cout << v.at(2) << endl;

    // ketala element store karvani capacity chhe te jova mate capacity method chhe
    cout << v.capacity() << endl;

    // if vector ma koi element na hoy ane aeni size define na hoy to starting ma capacity 0 aavse
    vector<int> v1;
    cout << "vector v1 capacity is:" << v1.capacity() << endl;

    // have aapde jate j capacity define karvi hoy to reserve no use kari shakay chhe
    v1.reserve(10);
    cout << "vector v1 capacity is : " << v1.capacity() << endl;

    // maximum size ketali lai shake chhe teni mate max_size
    // cout << "Max size is: " << v1.max_size() << endl;

    // vector ma jetala element chhe e badha ne clear karse clear method
    v1.clear();
    cout << v1.size() << endl;

    // insert(index , value) : aa method 2 argument le chhe , ek kaya index par value mukvi chhe and shu value mukvani chhe
    v1.insert(v1.begin(), 70);
    cout << v1[0] << endl;

    // erase(starting , ending) : range ma erase kari shakay chhe
    v1.erase(v1.begin(), v1.end());
    cout << v1.size() << endl;

    // swap : if aapde ek vector na content ne bija vector na content jode swap karvu hoy to aa method use thay chhe
    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    first.swap(second);

    // cout << first[0] << " " << first[1] << " " << first[2] << " " << first[3] << " " << endl ;
    // cout << second[0] << " " << second[1] << " " << second[2] << " " << second[3] << " " << endl ;

    // for each loop

    for (int i : first)
    {
        cout << i << " ";
    }

    cout << endl;

    for (int j : second)
    {
        cout << j << " ";
    }

    cout << endl;

    // traversing the vector using iterators

    // create an iterator
    vector<int> :: iterator it = first.begin();
    
    while (it != first.end())
    {
        cout << *it << " ";
        it++;
    }
    
    
    return 0;
}