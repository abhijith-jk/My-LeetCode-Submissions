// OJ: https://leetcode.com/contest/weekly-contest-218/problems/goal-parser-interpretation/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
    string interpret(string s) {
        string ans;
        for (int i = 0; i < s.size(); ) {
            if (s[i] == 'G') ans += 'G', ++i;
            else if (s[i + 1] == ')') ans += 'o', i += 2;
            else ans += "al", i += 4;
        }
        return ans;
    }
};