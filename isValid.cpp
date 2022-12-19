class Solution {
public:
    bool isValid(string s) {

        if (s.length() % 2 != 0) return false;
        vector<char> ps; //first in last out (FILO) data structure = stack

        for (unsigned int i = 0; i < s.length(); i++)
        {
            char c = s[i];

            if (!ps.empty()) //if not empty{
                if (c == '}' )
                {
                    if (ps.at(ps.size() - 1) == '{') ps.erase(ps.end() - 1);
                    else return false;
                }
                else if (c == ')')
                {
                    if (ps.at(ps.size() - 1) == '(') ps.erase(ps.end() - 1);
                    else return false;
                }
                else if (c == ']' )
                {
                    if (ps.at(ps.size() - 1) == '[') ps.erase(ps.end() - 1);
                    else return false;
                }
            }
            else //if empty
            {
                if (c == ')' || c == '}' || c == ']')
                {
                    return false;
                }
            }
            if (c == '(' || c == '{' || c == '[') ps.push_back(c);
        }

        return ps.empty();
    }
};