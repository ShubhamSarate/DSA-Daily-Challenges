#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

bool isBalanced(const string& s) {
    // Stack to store opening brackets
    stack<char> st; 
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        // Process closing brackets
        else if (c == ')' || c == '}' || c == ']') {
            // No opening bracket
            if (st.empty()) return false; 
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
            // Pop matching opening bracket
            st.pop(); 
        }
    }
    // Balanced if stack is empty
    return st.empty(); 
}

int main() {
    vector<string> testCases = {"[{()}]", "[()()]{}", "(]", "([{]})"};
    for (const string& s : testCases) {
        cout << "Input: " << s << " -> Output: " << (isBalanced(s) ? "true" : "false") << endl;
    }
    return 0;
}
