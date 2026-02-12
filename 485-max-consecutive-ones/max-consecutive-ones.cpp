class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = INT_MIN;
        for(int i=0;i<nums.size();i++){
            int count = 0;
            while(i < nums.size()){
                if(nums[i] == 1){
                    count++;
                } else {
                    break;
                }
                i++;
            }
            maxcount = max(count,maxcount);
        }

        return maxcount;
    }
};