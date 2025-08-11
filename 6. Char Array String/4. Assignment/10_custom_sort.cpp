#include<iostream>
#include<algorithm>
// #include<comip.h>
using namespace std;
string orderCopy;

static bool cmp(char a ,char b){
    return (orderCopy.find(a) < orderCopy.find(b));
}


string customSortString(string order,string s){
    orderCopy = order;
    sort(s.begin(),s.end(),cmp);
    return s;
}

int main()
{
    string order = "cba";
    string s  = "abcd";
    cout << customSortString(order,s);
    return 0;
}