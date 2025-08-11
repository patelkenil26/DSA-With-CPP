/*
680. Valid Palindrome II
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

Example 1:
Input: s = "aba"
Output: true

Example 2:
Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.

Example 3:
Input: s = "abc"
Output: false 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.

*/

#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string str,int i,int j){
    while (i<=j)
    {
        if(str[i]!=str[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

bool validPalindrome2(string str){
    int len = str.length();
    int i=0;
    int j = len-1;
    while(i<=j){
        if(str[i]==str[j]){
            i++;
            j--;
        }else{
            bool ansOne = checkPalindrome(str,i+1,j);
            bool ansTwo = checkPalindrome(str,i,j-1);
            bool finalAns = ansOne || ansTwo;
            return finalAns;
        }
    }
    return true;
}

int main()
{
    // string str = "aba";
    string str = "abca";
    // string str = "abcaa";
    bool ans = validPalindrome2(str);
    cout << ans;
    return 0;
}