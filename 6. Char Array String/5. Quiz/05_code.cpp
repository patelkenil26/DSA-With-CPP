#include<iostream>
#include<string>
using namespace std;

int main()
{
    // 5.
    // char s1[6] = "Hello";
    // char s2[6] = "World";
    // char s3[12] = s1 + " " + s2;
    // cout << s3;

    // 6.
    string s1 = "Hello";
    string s2 = "World";
    // string s3 = s1+" "+s2;
    // string s3 = s1.append(s2);
    string s3 = strcat(s1,s2);
    cout << s3;
    return 0;
}