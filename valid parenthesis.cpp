#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for (int i=0;i<s.length();i++) {
    	char ch= s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            if (st.empty()) {
                return false;
            }
            if ((ch == ')' && st.top() != '(') ||
                (ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '[')) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main() {
    string s;
    cout << "Enter parentheses: ";
    cin >> s;
    if (isValid(s))
        cout << "Valid Parentheses";
    else
        cout << "Invalid Parentheses";
    return 0;
}
