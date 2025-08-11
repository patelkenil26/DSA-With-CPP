/*
647. Palindromic Substrings

Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 

Example 1:
Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".

Example 2:
Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 

Constraints:
1 <= s.length <= 1000
s consists of lowercase English letters.
*/


#include<iostream>
using namespace std;

int expandAroundCenter(string s , int i,int j){
    int count =0;
    while(i>=0 && j<s.length() && s[i] == s[j]){
        count ++;
        i--;
        j++;
    }
    return count;
}

int totalSubStrPali(string s){
    int totalCount=0;
    for(int k=0;k<s.length();k++){
        int i = k;
        int j = k;

        int oddPaliSubStr = expandAroundCenter(s,i,j);

         i = k;
         j = k+1;
        int evenPaliSubStr = expandAroundCenter(s,i,j);

        totalCount = totalCount + oddPaliSubStr + evenPaliSubStr;
    }
    return totalCount;
}

int main()
{
    string str = "babbar";
    int ans = totalSubStrPali(str);
    cout << ans;
    return 0;
}