class Solution {
public:
    void Helper(int open,int close,vector<string> &ans,string str){
        if(open == 0 && close == 0){
            ans.push_back(str);
            return;
        }
        if(open == close){
            string op1 = str;
            op1.push_back('(');
            Helper(open-1, close, ans, op1);
        }
        else if(open == 0){
            string op1 = str;
            op1.push_back(')');
            Helper(open, close-1, ans, op1);
        }
        else if(close == 0){
            string op1 = str;
            op1.push_back('(');
            Helper(open-1, close, ans, op1);
        }
        else{
            string op1 = str;
            string op2 = str;
            op1.push_back('(');
            op2.push_back(')');
            Helper(open-1, close, ans, op1);
            Helper(open, close-1,ans, op2);
        }        
    }
    vector<string> generateParenthesis(int n) {
        string str = "";
        vector<string> ans;
        int open = n;
        int close = n;
        Helper(open,close,ans,str);
        return ans;
    }
};