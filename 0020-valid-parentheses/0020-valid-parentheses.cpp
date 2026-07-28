class Solution {
public:
    bool isValid(string s) {
        stack<char> stack = {};
        if (s.size() % 2 != 0) {
            return false;
        }
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            }
            if (c == ')') {
                if (stack.empty()) {
                    return false;
                }
                if (stack.top() == '(') {
                    stack.pop();
                }
                else return false;
            } else if (c == '}') {
                if (stack.empty()) {
                    return false;
                }
                if (stack.top() == '{') {
                    stack.pop();
                }
                else return false;
            } 
            else if (c == ']') {
                if (stack.empty()) {
                    return false;
                }
                if (stack.top() == '[') {
                    stack.pop();
                }
                else return false;
            }
        }
        if (stack.empty()) {
            return true;
        }
        return false;
    }
};