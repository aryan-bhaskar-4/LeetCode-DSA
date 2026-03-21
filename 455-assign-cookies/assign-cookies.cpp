class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        int ans = 0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        
        int i = 0;
        int j = 0;

        while(i < m && j < n){
            if(s[i] >= g[j]){
                ans++;
                i++;
                j++;
            } else {
                i++;
            }
        }

        return ans;

    }
};