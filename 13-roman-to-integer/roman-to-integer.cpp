class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        int ans = 0;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        for(char ch : s){
            ans += mp[ch];
        }

        for(int i=0;i<n-1;i++){
            if((s[i] == 'C' && s[i+1] == 'M') || (s[i] == 'C' && s[i+1] == 'D')){
                ans -= 200;           
            } else if((s[i] == 'X' && s[i+1] == 'L') || (s[i] == 'X' && s[i+1] == 'C')){
                ans -= 20;
            } else if((s[i] == 'I' && s[i+1] == 'V') || (s[i] == 'I' && s[i+1] == 'X')){
                ans -= 2;
            }
        }

        return ans;
    }
};