class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;

        for(int i=0;i<n;i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            } else if(nums[i] < 0){
                neg.push_back(nums[i]);
            }
        }
        int n1 = pos.size();
        int n2 = neg.size();

        int i=0;
        int j=0;

        while(i < n1 && j < n2){
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }

        return ans;
    }
};