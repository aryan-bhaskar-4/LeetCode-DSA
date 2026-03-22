class Solution {
public:
    int minRemovals(vector<int>& nums, int target) {
        int n = nums.size();

        const int MAX_XOR = 16384;
        vector<int> dp(MAX_XOR,-1);

        dp[0] = 0;

        for(int x : nums){
            vector<int> next_dp = dp;
            for(int val = 0;val<MAX_XOR;val++){
                if(dp[val] != -1){
                    int next_xor = val ^ x;
                    next_dp[next_xor] = max(next_dp[next_xor], dp[val] + 1);
                }
            }
            dp = next_dp;
        }
        if(dp[target] == -1){
                return -1;
            }

        return n - dp[target];
    }
};