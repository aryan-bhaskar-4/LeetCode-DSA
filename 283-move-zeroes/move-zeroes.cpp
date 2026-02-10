class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        if(n == 0 && n == 1){
            return;
        }

        int i = 0;
        int j = i+1;

        while(i < n-1 && j < n){
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i++],nums[j++]);
            } else if(nums[i] != 0 && nums[j] != 0){
                i++;
                if(i==j){
                    j++;
                }
            } else {
                j++;
            }
        }

        return;
    }
};