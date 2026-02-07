class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n = nums.size();

       int i=1;
       int j=n-1;

       if(nums[n-1] < target){
        return n;
       }

       if(nums[0] == target || target < nums[0]){
        return 0;
       }

       while(i <= j){
        int mid = i + (j-i)/2;

        if(nums[mid] == target || nums[mid-1] < target && target < nums[mid])  {
            return mid;
        } else if(nums[mid] > target){
            j = mid-1;
        } else {
            i = mid+1;
        }
       } 

       return 1;
    }
};