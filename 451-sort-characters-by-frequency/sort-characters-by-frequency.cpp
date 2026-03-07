class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        string ans = "";

        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        vector<pair<char,int>> V(mp.begin(),mp.end());

        sort(V.begin(),V.end(),[] ( pair<char,int> &p1,pair<char,int> &p2){
        return p1.second > p2.second;
        });

        for(auto it:V){
            for(int i=0;i<it.second;i++){
                ans += it.first;
            }
        }

        return ans;
    }
};