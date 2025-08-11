#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);
    first.push_back(5);

    vector<int> second;
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);
    second.push_back(7);
    second.push_back(8);

    vector<int> result1;

    set_union(first.begin(),first.end(),second.begin(),second.end(),inserter(result1,result1.begin()));
    cout << "Union: ";
    for(int a : result1){
        cout << a << " ";
    }cout << endl;

    
    vector<int> result;
    set_intersection(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    cout << "Intersection: ";
    for(int a : result){
        cout <<  a << " ";
    }cout << endl;


    vector<int> res ;
    set_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(res,res.begin()));
    cout << "Difference: ";
    for(int a : res){
        cout << a << " ";
    }cout << endl;


    vector<int> resu ;
    set_symmetric_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(resu,resu.begin()));
    cout << "Symmetric Difference: ";
    for(int a : resu){
        cout << a << " ";
    }cout << endl;
    return 0;
}