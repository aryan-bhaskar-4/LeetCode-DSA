class Solution {
public:
    int solve(vector<int>& nums, int k){
        if(k < 0) return 0;
        int n = nums.size();
        int l = 0, r = 0, sum = 0, count = 0;
        while(r < n){
            sum += nums[r];
            while(sum > k){
                sum -= nums[l];
                l++;
            }
            count += (r - l + 1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) nums[i]=0;
            else nums[i]=1;
        }
        return solve(nums, k) - solve(nums, k - 1);
    }
};