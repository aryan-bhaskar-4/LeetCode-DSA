class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freqP(26, 0);
        vector<int> freqW(26, 0); 
        vector<int> ans;
        
        int k = p.size();
        int n = s.size();
        
        if(k > n) return ans;
        
        for(char c : p){
            freqP[c - 'a']++;
        }

        for(int i = 0; i < k; i++){
            freqW[s[i] - 'a']++;
        }
        
        int matches = 0;
        for(int i = 0; i < 26; i++){
            if(freqP[i] == freqW[i]) matches++;
        }
        
        if(matches == 26){
            ans.push_back(0);
        }
        
        for(int i = k; i < n; i++){
            int right = s[i] - 'a';      
            int left = s[i - k] - 'a';
            
            
            if(freqP[right] == freqW[right]) matches--;
            freqW[right]++;

            if(freqP[right] == freqW[right]) matches++;
            
            if(freqP[left] == freqW[left]) matches--;
            freqW[left]--;
    
            if(freqP[left] == freqW[left]) matches++;
            
            if(matches == 26){
                ans.push_back(i - k + 1);
            }
        }
        
        return ans;
    }
};