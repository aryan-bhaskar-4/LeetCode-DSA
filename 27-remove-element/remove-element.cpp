class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> temp;

        for(int i=0;i<n;i++){
            if(nums[i] != val){
                temp.push_back(nums[i]);
            }
        }
        int sz = temp.size();

        for(int i=0;i<n;i++){
            nums.pop_back();
        }

        for(int i=0;i<sz;i++){
            nums.push_back(temp[i]);
        }
        

        return sz;
    }
};