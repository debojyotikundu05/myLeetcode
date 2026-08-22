class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                } 
                if ((st.top() == '(' && s[i] == ')') ||
                           (st.top() == '{' && s[i] == '}') ||
                           (st.top() == '[' && s[i] == ']')) {
                    st.pop();
                } else {
                    return false; // the stack is not empty but also the closing bracket dosen't match with the last opening bracket
                }
            }
        }
        return st.empty();
    }
};