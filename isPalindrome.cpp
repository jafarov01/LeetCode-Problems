/* 
* LeetCode Palindrome Number Problem
* Given an integer x, return true if x is a palindrome, and false otherwise.

* 12/3/2022 Makhlug Jafarov
* https://leetcode.com/makhlugjafarov/
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
		string num = to_string(x);
        int len = num.length();
       
		for (int i = 0; i < len; i++)
        {
            if (num[i] != num[len - 1 - i]) return false;
        }
        return true;
    }
};