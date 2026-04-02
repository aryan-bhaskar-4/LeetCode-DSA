class Solution {
public:
    int balancedString(string s) {
        int left = 0;
        int right = 0;
        int n = s.size();
        int ans = INT_MAX;

        unordered_map<char,int>mp;

        for(char ch : s){
            mp[ch]++;
        }

        if(mp['Q'] <= n/4 && mp['W'] <= n/4 && mp['E'] <= n/4 && mp['R'] <= n/4) return 0;

        while(right < s.size()){
            mp[s[right]]--;

            while(left <= right && mp['Q'] <= n/4 && mp['W'] <= n/4 && mp['E'] <= n/4 && mp['R'] <= n/4){
                ans = min(ans , right - left + 1);
                 mp[s[left]]++;
                left++;

            }
            right++;
        }
        return ans;
    }
};