// Problem: Valid Parentheses
// Platform: LeetCode
// Link: https://leetcode.com/problems/valid-parentheses/description/
// Difficulty: Easy
// Approach: Stack
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') { //opening
                st.push(c);
            } else { // closing
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
}; // TC = O(n) SC = O(n)

int main() {
    Solution sol;
    string s;
    cin >> s;

    if (sol.isValid(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}
