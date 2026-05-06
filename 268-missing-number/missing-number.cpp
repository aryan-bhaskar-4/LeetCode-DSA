class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int total_sum = (n * (n+1))/2;
        int currsum = 0;

        for(int i=0;i<n;i++){
            currsum += nums[i];
        }

        int num = total_sum - currsum;
        return num;
    }
};