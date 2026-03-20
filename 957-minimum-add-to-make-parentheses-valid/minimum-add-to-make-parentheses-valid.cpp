class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int ans = 0;
        stack<char> st;

        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch == '('){
                st.push(ch);
            }
            
            if(!st.empty()){
                char top = st.top();
                if(ch == ')' && top == '('){
                st.pop();
                }
            } else if(ch == ')'){
                ans++;
            }
        }

        int sz = st.size();
        ans += sz;
        return ans;
    }
};