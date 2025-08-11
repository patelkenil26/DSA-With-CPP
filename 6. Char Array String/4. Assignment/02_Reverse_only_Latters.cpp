/*

917. Reverse Only Letters
Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.



Example 1:
Input: s = "ab-cd"
Output: "dc-ba"

Example 2:
Input: s = "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"

Example 3:
Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
*/

#include <iostream>
#include <cctype>
using namespace std;

string reverseOnlyLatter(string s)
{
    int l = 0;
    int h = s.size() - 1;
    while (l < h)
    {
        if (isalpha(s[l]) && isalpha(s[h]))
        {
            swap(s[l], s[h]);
            l++;
            h--;
        }
        else if (!isalpha(s[l]))
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    return s;
}

int main()
{
    // string s = "ab-cd";
    string s = "a-bC-dEf-ghIj";
    cout << reverseOnlyLatter(s);

    return 0;
}