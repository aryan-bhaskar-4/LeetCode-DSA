class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        if(p.size()>s.size()) return {};
        unordered_map<char,int>m1,m2;

        int i=0;
        int j=p.size()-1;
        for(int pp=0;pp<p.size();pp++)
        {
            m1[s[pp]]++;
            m2[p[pp]]++;
        }
        if(m1==m2) v.push_back(i);

        while(j<s.size()-1)
        {
            j++; 
            m1[s[j]]++;
            m1[s[i]]--;
            if(m1[s[i]]==0) m1.erase(s[i]);
            i++;
            if(m1==m2) v.push_back(i);
        }
        return v;
    }
};