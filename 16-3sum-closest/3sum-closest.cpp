class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int result = nums[0] + nums[1] + nums[2];

        while(i < n-2){
            int j = i+1;
            int k = n-1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if(abs(target - sum) < abs(target - result)){
                    result = sum;
                }
                if(sum == target){
                    return target;
                } else if (sum < target){
                    j++;
                } else {
                    k--;
                }
            }

            i++;
            
        }

        return result;
    }
};