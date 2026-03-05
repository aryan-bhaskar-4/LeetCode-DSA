class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        stack<char> st;
        string ans = "";

        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch == '(') {
                if(!st.empty()) {
                    ans += ch;
                }
                st.push(ch);
            } 
            else {
                st.pop();
                if(!st.empty()) {
                    ans += ch;
                }
            } 
        }

        return ans;
    }
};