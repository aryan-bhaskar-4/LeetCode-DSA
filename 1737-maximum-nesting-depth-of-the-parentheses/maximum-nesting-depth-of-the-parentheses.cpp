class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        // stack<char> st;
        int maxPar = 0;
        int curr = 0;

        for(auto ch : s){
            if(ch == '('){
                curr++;
            } else if(ch == ')'){
                curr--;
            }

            maxPar = max(curr,maxPar);
        }

        return maxPar;
    }
};