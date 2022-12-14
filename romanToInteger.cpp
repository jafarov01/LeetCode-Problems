/* 
* LeetCode Roman To Integer Problem
* Given a roman numeral, convert it to an integer.

* 12/3/2022 Makhlug Jafarov
* https://leetcode.com/makhlugjafarov/
*/

class Solution {
public:
    int getValue(char s)
    {
        switch(s)
        {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return -1;
        }
    }

    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int val1 = getValue(s[i]);
            int val2 = 0;
            if (i != s.length() - 1) val2 = getValue(s[i + 1]);
            if (val1 < val2)
            {
                result += (val2 - val1);
                i++;
            }
            else {
                result += val1;
            }
        }
        return result;
    }
};
