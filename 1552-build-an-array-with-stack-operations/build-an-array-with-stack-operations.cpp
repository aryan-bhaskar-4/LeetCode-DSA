class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int sz = target.size();
        int j=1;
        int i=0;

        
        while (i < sz && j <= n) {
            ans.push_back("Push"); 
            
            if (target[i] == j) {
                i++; 
            } else {
                ans.push_back("Pop"); 
            }
            j++;
        }
        
        return ans;
    }
};