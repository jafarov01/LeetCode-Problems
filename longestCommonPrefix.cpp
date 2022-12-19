class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        // Find the length of the shortest string
        int minLength = INT_MAX;
        for (const string& str : strs) {
            minLength = min(minLength, (int)str.length());
        }

        // Compare the characters in the shortest string to the corresponding characters in the other strings
        for (int i = 0; i < minLength; i++) {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0].substr(0, minLength);
    }
};